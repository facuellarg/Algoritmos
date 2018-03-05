package fibb;

import java.util.ArrayList;
import java.util.Collections;

public class Matrix {
	final static int TAM = 500;
	static int[][] m1;	
	static int[][] m2;
	static int[][] mr;
	static ArrayList<Long> tiempos = new ArrayList<>(TAM);
	
	public static int pp(int a, int b, int n){
		int res = 0;
		for(int i = 0; i < n; i++){
			res = res + (m1[a][i]*m2[i][b]);
		}

		return res;		
	}
	
	public static Long multiplicarMatriz(int n){
		Long ti, tpi;
		ti = System.nanoTime();
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				mr[i][j]= pp(i,j,n);
			}	
		}
		tpi = (System.nanoTime() - ti)/n*n;
		return tpi;
	}
	
	public static void main(String[] args){
		Long res;
		for(int n = 10; n < TAM ; n ++){
			res = 0l;
			m1 = new int[n][n];
			m2 = new int[n][n];
			mr = new int[n][n];
//			for(int i = 0; i < 10; i++){
//				for(int j = 0; j < 10; j++){
//					m1[i][j]=1;
//					m2[i][j]=1;			
//				}	
//			
//			}
			for (int i = 0; i < 10; i++){
				res += multiplicarMatriz(n);
			}
			
			tiempos.add((res/10l));
		}
		
		for(int i = 0; i < TAM-10; i++){
			System.out.println(tiempos.get(i));			
		}
		
		
	}
}
