

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class IndirectSort_1750A {
 static Scanner scanner =new Scanner(System.in);
	public static void main(String []args) {
	 int t=scanner.nextInt();
	 int a,n=0;
	 for(int i=0;i<t;i++) {
		 n=scanner.nextInt();
		List<Integer> p=new ArrayList<Integer>();
		 for(int j=0;j<n;j++) {
			 a=scanner.nextInt();
			 p.add(a);
		 }//
		 if(p.get(0)==1) {
			 System.out.println("YES");
		 }else {
			 System.out.println("NO");
		 }
		 p.clear();
	 }
	 
	}
}
