import java.io.IOException;
import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;
import java.net.SocketException;
import java.net.UnknownHostException;

public class Rfc865UdpClient {
	public static void main(String[] args) {
		//
		// 1. Open UDP socket
		//
		DatagramSocket socket = null;
		try{
			socket = new DatagramSocket();
			InetAddress ip_address = InetAddress.getByName("localhost");
			System.out.println("Connecting to Server: " + ip_address);
			socket.connect(ip_address, 17);
		} catch(SocketException | UnknownHostException e){
			e.printStackTrace();
			System.exit(-1);
		}
		try {
			//
			// 2. Send UDP request to server
			//
			InetAddress ip_address = InetAddress.getByName("localhost");
			System.out.println("Sending Datagram to Server: "+ ip_address);
			byte[] buffer = "Type your message here".getBytes("UTF-8");
			DatagramPacket request = new DatagramPacket(buffer, buffer.length);
			socket.send(request);
			//
			// 3. Receive UDP reply from server
			//
			byte[] reply_buf = new byte[512];
			DatagramPacket reply = new DatagramPacket(reply_buf, reply_buf.length);
			socket.receive(reply);
			String quote = new String(reply_buf);
			System.out.println("Getting quote from server...");
			System.out.println(quote);
		} catch (IOException e) {
			e.printStackTrace();
		} finally{
			System.out.println("Disconnecting...");
			socket.close();
		}
	}
}
