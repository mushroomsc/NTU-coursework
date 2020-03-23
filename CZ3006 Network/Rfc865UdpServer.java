import java.io.IOException;
import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;
import java.net.SocketException;

public class Rfc865UdpServer {
	public static void main(String[] args) {
		//
		// 1. Open UDP socket at well-known port
		//
		DatagramSocket socket = null;
		try{
			socket = new DatagramSocket(17);
		} catch (SocketException e){
			e.printStackTrace();
			System.exit(-1);
		}
		
		while(true){
			try{
				//
				// 2. Listen for UDP request from client
				//
				byte[] buffer = new byte[512];
				DatagramPacket request = new DatagramPacket(buffer, buffer.length);
				socket.receive(request);
				System.out.println("Request Received.");
				String s = new String(buffer);
				System.out.println(s);
				InetAddress ip_address = request.getAddress();
				int port = request.getPort();
				System.out.println("Client Address = " + ip_address);
				//
				// 3. Send UDP reply to client
				//
				byte[] reply_buf = "Some quote here".getBytes("UTF-8");
				DatagramPacket reply = new DatagramPacket(reply_buf, reply_buf.length, ip_address, port);
				socket.send(reply);
				System.out.println("Reply Sent.");
			} catch(IOException e){
				e.printStackTrace();
			}
		}
	}
}
