import java.util.Random;

/**
 * Created by paypaytr on 8/11/17.
 */
public class dersProgram {

    public static final int day = 5 ;
    public static String week[]=new String [day];

    public final static int rana=20;

    public static int starter=9;
    public static int artis;
    public static int bitis=17;


    public static int Random(){
        Random rand = new Random();
        return rand.nextInt(rana);
    }

    public static void fiil(Job our){
        int f = our.akts.size();
        int array[]=new int[f];
        for(int c=0;c<f;c++)
        array[f]=0;

        for(int i=0;i<day;i++){

            while(true){
                artis=Random() % our.akts.size();
                array[artis]++;
                if(allfull(array, f)==-1 && starter+artis<bitis){

                    week[i]+= starter + our.code.get(artis)+ "\n" + starter+artis+our.name.get(artis);
                }
                else if(starter+allfull(array,f)<bitis){
                    array[allfull(array,f)]++;
                    week[i]+= starter + our.code.get(allfull(array,f))+ "\n" + starter+allfull(array,f)+our.name.get(allfull(array,f));

                }
                else
                    break;

                }
                System.out.println("day ends");






        }


    }
    public static int allfull(int ar [],int size){
            for(int i=0;i<size;i++) {
                if (ar[i] == 0) {
                    return i;
                }
            }
            return -1;
    }
}
