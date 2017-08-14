/**
 * Created by paypaytr on 8/13/17.
 */
public class dersTable {
    public dersTable(Job us) {
        printe(us);
    }
    public static void printe(Job us){
        System.out.println("Here's your generated class program");
        for(int i=0;i<us.information.size();i++){
            System.out.println(us.name.get(i));
            System.out.println(us.tutor.get(i));
            System.out.println(us.code.get(i));
            System.out.println(us.GTUakts.get(i)+"and " + us.akts.get(i));


        }
    }

}
