import java.io.DataInputStream;
class harmonic {
	public static void main(String args[])
	{	int sum=0;
		DataInputStream in = new DataInputStream(System.in);
	try {
	int  n = Integer.parseInt(in.readLine());
	for(int i=1; i<n;i++)
	sum=sum+(1/i);
	}

	catch(Exception e)
	{}
	System.out.println(sum);
	}
}