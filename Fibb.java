package fibb;


public class Fibb {
    
    public static  int  fibInt(int n) throws Exception{
        int n1 = 0;
        int n2 = 1;
        
        if (n == 0 || n == 1){      return 1;}
      
        
        for(int i = 0; i<n-1; i++){
            n2 = n1 + n2;
            n1 = n2 - n1;
            if (n2 < 0){
                System.out.println("El maximo valor soportado en Int es "+(i+1));
                throw new Exception();
            } 
            
        }
        return n2;
    }
    public static  long  fibLong(long n) throws Exception{
        long n1 = 0;
        long n2 = 1;
        
        if (n == 0 || n == 1){      return 1;}
      
        
        for(int i = 0; i<n-1; i++){
            n2 = n1 + n2;
            n1 = n2 - n1;
            if (n2 < 0){
                System.out.println("El maximo valor soportado es en Long "+(i+1));
                throw new Exception();
            } 
            
        }
        return n2;
    }
    
    
     public static  long  fibShort(int maxValue) throws Exception{
        short n1 = 0;
        short n2 = 1;
        
        if (maxValue == 0 || maxValue == 1){      return 1;}
      
        
        for(int i = 0; i<maxValue-1; i++){
            n2 = (short) (n1 + n2);
            n1 = (short) (n2 - n1);
            if (n2 < 0){
                System.out.println("El maximo valor soportado es en Short "+(i+1));
                throw new Exception();
            } 
            
        }
        return n2;
    }
    
    
    public static void main (String[]arg) {
    	
    	try {
    		fibInt(Integer.MAX_VALUE);
    		
			
		} catch (Exception e) {
		
			
		}try {
    		fibLong(Integer.MAX_VALUE);
    		
			
		} catch (Exception e) {
	
		
		}try {
    		fibShort(Integer.MAX_VALUE);
    		
			
		} catch (Exception e) {
			
		}
		
		
    	
    
    }
}