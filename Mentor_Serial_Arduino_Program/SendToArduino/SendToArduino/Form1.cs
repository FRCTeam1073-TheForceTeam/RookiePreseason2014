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


namespace SendToArduino
{
    public partial class Form1 : Form
    {
        SerialPort port = null;

        public Form1()
        {
            InitializeComponent();
            string portName = SendToArduino.Properties.Settings.Default.PortName;
            port = new SerialPort(portName);
            port.Open();
            port.DataReceived += port_DataReceived;
        }

        private void sendButton_Click(object sender, EventArgs e)
        {
            string dataToSend = valueBox.Text + "\n";
            var asciiData = Encoding.ASCII.GetBytes(dataToSend);

            port.Write(asciiData, 0, asciiData.Length);
        }

        private void port_DataReceived(object sender, EventArgs e)
        {
            Console.WriteLine("Received data from Arduino");
            var dataRead = port.ReadLine();
            fromArduinoBox.Text = dataRead;
            
        }
    }
}
