import java.util.*;
import java.math.*;
public class Main {
	public static void main(String[] args) {
		BigInteger[] dp=new BigInteger[5001];
		dp[0]=BigInteger.valueOf(0);
		dp[1]=BigInteger.valueOf(1);
		for(int i=2; i<=5000; i++) {
			dp[i]=dp[i-1].add(dp[i-2]);
		}
		Scanner input=new Scanner(System.in);
		while(input.hasNext()) {
			int n=input.nextInt();
			System.out.println(dp[n]);
		}
	}
}