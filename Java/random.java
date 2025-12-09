import java.util.Random;
public class random {
    public static void main(String args[]){
        Random rand= new Random();
        
        int arandom= rand.nextInt(6)+1;
        Double arandom2= rand.nextDouble(6)+1;
        Boolean arandom3= rand.nextBoolean();
        System.out.println(arandom);
        System.out.println(arandom2);
        System.out.println(arandom3);
    }
}
