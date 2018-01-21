import java.util.Scanner;


public class Find
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		int n,k;
		n = in.nextInt();
		k= in.nextInt();
		int sum=0;
		int a[] = new int[n];
		for (int i = 0; i < a.length; i++) {
			a[i] = in.nextInt();
			
		}
		for (int i =0; i < k; i++) {
			sum+=a[i];
			
		}
		System.out.println(sum);

	}

}
