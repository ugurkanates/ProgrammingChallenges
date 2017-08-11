import java.util.Random;

public class Main {

    private static final int DERS=14;
    private static final int YEAR=4;
    private static final int TOTAL=25;
    private static final int YEAR2=5;





    public static void main(String[] args)throws  Exception {
        try {


            Job pc = new Job(YEAR);
            Job mimar = new Job(YEAR);


            int i = 0;


            Job My = new Job();

            String[] haf = new String[5]; //totaly wrong


            while (true) {
                int n = Random() % 2;
                if (My.topAkts < TOTAL) {
                    switch (n) {
                        case 0:
                            My.addit(pc);
                            My.topAkts += My.GTUakts.get(i);
                            break;
                        case 1:
                            My.addit(mimar);
                            My.topAkts += My.GTUakts.get(i);
                            break;

                    }
                    i++;
                } else
                    break;


            }
            dersProgram.fiil(My);
            for (int m = 0; m < 5; m++)
                System.out.print(haf[m]);

        } catch (Exception e) {
            ;

        }

    }
    public static int Random(){
        Random rand = new Random();
        return rand.nextInt(DERS);
    }
    public int RandomYear(){
        Random rand = new Random();
        return rand.nextInt(DERS);
    }
}
