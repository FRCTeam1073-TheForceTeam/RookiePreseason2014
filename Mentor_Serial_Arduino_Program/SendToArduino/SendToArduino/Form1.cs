using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO.Ports;
using System.Reflection;
 
namespace SendToArduino
{
    public partial class Form1 : Form
    {
        SerialPort port = null;

        public Form1()
        {
            InitializeComponent();

            // Open the COM port.  The port number is specified in the app.config file, and defaults to COM3
            string portName = SendToArduino.Properties.Settings.Default.PortName;
            port = new SerialPort(portName);
            port.Open();

            // Register an event handler that gets signaled when data is available to be read
            // from the port
            port.DataReceived += new SerialDataReceivedEventHandler(port_DataReceived);
        }

        private void sendButton_Click(object sender, EventArgs e)
        {
            // Add a newline character to the end of the string.  The Ardunino 
            // sample we ran expects to read until it get a newline character
            string dataToSend = valueBox.Text + "\n";

            // Convert the data from the UCS-2 encoding (default for a .NET string)
            // to the ASCII character set, which is what the Arduino uses as the default
            byte []asciiData = Encoding.ASCII.GetBytes(dataToSend);

            // Send the data
            port.Write(asciiData, 0, asciiData.Length);
        }

        private void port_DataReceived(object sender, EventArgs e)
        {

            // Read one line of data (until there is a newline)
            string dataRead = port.ReadLine();

            // Put the data into the text box on the form.  We use a special routine that makes the operation run on the 
            // form's thread.  The current event handler runs on a thread that the SerialPort class creates to
            // monitor the serial port.
            SetControlPropertyThreadSafe(fromArduinoBox, "Text", dataRead);
            
        }

        // Copied from StackOverflow
        // http://stackoverflow.com/questions/661561/how-to-update-the-gui-from-another-thread-in-c?rq=1 
        private delegate void SetControlPropertyThreadSafeDelegate(Control control, string propertyName, object propertyValue);

        public static void SetControlPropertyThreadSafe(Control control, string propertyName, object propertyValue)
        {
            if (control.InvokeRequired)
            {
                control.Invoke(new SetControlPropertyThreadSafeDelegate(SetControlPropertyThreadSafe), new object[] { control, propertyName, propertyValue });
            }
            else
            {
                control.GetType().InvokeMember(propertyName, BindingFlags.SetProperty, null, control, new object[] { propertyValue });
            }
        }
    }
}
