import java.util.Scanner;

public class EvenOddIncrements_1744B {
	static Scanner scanner =new Scanner(System.in);
	public static void main(String []args) {
		long t=scanner.nextLong();
		for(long i=0;i<t;i++) {
			int n=scanner.nextInt();
			long q=scanner.nextLong();
			int a[]=new int[n];
			long sum=0;
			int odd=0;
        	int even=0;
			for(int j=0;j<n;j++) {
				a[j]=scanner.nextInt();
				sum+=a[j];
        		if(a[j]%2==0)even++;
        		else odd++;
			}
			for(long l=0;l<q;l++)
			{
			long type=scanner.nextLong();
			long x=scanner.nextLong();
				if(type==0) {
					sum=(x*even+sum);
        			System.out.println(sum);
        			
        			if(x%2==1) {
        				odd+=even;
        				even=0;
        			}
				}else if (type==1) {
					sum=(x*odd+sum);
        			System.out.println(sum);
        			if(x%2==1) {
        				even+=odd;
        				odd=0;
        			}
			}
	}
}
}
}
/* time limit exceed on test 5 -_-
static Scanner scanner =new Scanner(System.in);
public static void main(String []args) {
	long t=scanner.nextLong();
	for(long i=0;i<t;i++) {
		long n=scanner.nextLong();
		long q=scanner.nextLong();
		long a[]=new long[(int) n];
		for(long j=0;j<n;j++) {
			a[(int) j]=scanner.nextLong();
		}
		for(long l=0;l<q;l++)
		{
		long sum=0;
		long sum1=0;
		long type=scanner.nextLong();
		long x=scanner.nextLong();
		for(int k=0;k<n;k++) {
			if(type==0) {
				if(a[k]%2==0) {
					a[k]=a[k]+x;
					sum+=a[k];
				}else {
					sum+=a[k];
				}
			}else if (type==1) {
				if(a[k]%2==1) {
					a[k]=a[k]+x;
					sum+=a[k];
				}else {
					sum+=a[k];
				}
			}
		}
		System.out.println(sum);
	}
}
}
*/