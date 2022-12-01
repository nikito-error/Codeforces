import java.util.Scanner;

public class NumberReplacement_1744A {
	static Scanner scanner =new Scanner(System.in);
public static void main(String [] args) {
	int t=scanner.nextInt();
	for(int i=0;i<t;i++) {
		int n=scanner.nextInt();
		boolean tr=true;
		int arr[]=new int[n];
		for(int j=0;j<n;j++) {
			arr[j]=scanner.nextInt();
		}
		String s=scanner.next();
		for(int k=0;k<n;k++) {
			for(int k1=k+1;k1<n;k1++) {
				if(arr[k]==arr[k1]) {
					if(s.charAt(k)!=s.charAt(k1)) {
						System.out.println("NO");
						tr=false;
						break;
					}
				}
			}
			if(tr==false) {
				break;
			}
		}
		if(tr==false) {
		
		}else {
		System.out.println("YES");
		}
		
	}
}
}
