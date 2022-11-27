package solutions;

import java.util.Arrays;
import java.util.Scanner;

public class Advantage_1760C {
	 static Scanner scanner=new Scanner(System.in);
		public static void main(String []args) {
		int t=scanner.nextInt();
		for(long j=0;j<t;j++) {
			Long Lastelement=0L;
			Long SecondLastelement=0L;
		long n=scanner.nextLong();
		Long[] f = new Long[(int) n]; 
		Long[] f1 = new Long[(int) n]; 
		for(long i=0;i<n;i++) {
			f[(int) i]=scanner.nextLong();
			f1[(int) i]=f[(int) i];
		}
		Arrays.sort(f);
		Lastelement=f[(int) (n-1)];
		SecondLastelement=f[(int) (n-2)];
		int br=0;
		for(long k=0;k<n;k++) {
	
			if(f1[br]==Lastelement) {
				System.out.print(Lastelement-SecondLastelement+" ");
			}else {
			long number=f1[br]-Lastelement;
			System.out.print(number+" ");
			}
			br++;
		}
		System.out.println();
		}
		}

}
