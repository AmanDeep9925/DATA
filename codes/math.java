import java.util.*;
import java.util.Scanner;
class math{
	public static void main(String[] args)
	{ Scanner sc = new Scanner(System.in);

		double n = sc.nextDouble();
		int N = sc.nextInt();
		System.out.println(Math.max(n,N));
		System.out.println(Math.pow(n,N));
	}
}