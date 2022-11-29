import java.util.Scanner;

public class MaximumSubstring_1750B {
	private static final Scanner scanner=new Scanner(System.in);
public static void main(String []args) {
		long t=scanner.nextLong();
		for(long i=0;i<t;i++) {
			long sum=0;
			long one=0;
			long zero=0;
			long count=1;
			long max=0;
			long summax=0;
			long n=scanner.nextLong();
			String f=scanner.next();
			for(long k=0;k<f.length();k++) {
				char c=f.charAt((int) k);
				if(c=='1') {
					one++;
				}else if(c=='0') {
				zero++;
				}
				if(k+1<f.length() && f.charAt((int) k)==f.charAt((int) (k+1))) {
					count++;
				}else {
					count=1;
				}
				if(max<count) {
					max=count;
				}
				
			}
			sum=one*zero;
			summax=max*max;
			System.out.println(Math.max(sum,summax));
			
}
 
}
}
