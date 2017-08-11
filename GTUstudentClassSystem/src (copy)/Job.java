/**
 * Created by paypaytr on 8/10/17.
 */
import java.io.*;
import java.util.*;




 public class Job {
    public ArrayList<String> code = new ArrayList<String>();
    public ArrayList<String> name = new ArrayList<String>();
    public ArrayList<String> information = new ArrayList<String>();
    public ArrayList<Integer> akts = new ArrayList<Integer>();
    public ArrayList<Integer> GTUakts = new ArrayList<Integer>();
    public ArrayList<Integer> semester = new ArrayList<Integer>();
    public ArrayList<Integer> numberofClass = new ArrayList<Integer>();
    public ArrayList<String> tutor = new ArrayList<String>();
    public ArrayList<String> question = new ArrayList<String>();
    public ArrayList<String> answer = new ArrayList<String>();
    public int i=0,j=0;
    public int topAkts=0;
    public static int called=0;
    public String className;

    public Job(){

    }
    public Job (int n)  throws Exception{
        try {
            read();
            called++;


        }
        catch (Exception e) {
            ;
        }
    }
    public void addit(Job a){
        Random ra = new Random();
        int n = ra.nextInt();

        a.name.add(name.get(n));
        a.information.add(information.get(n));
        a.answer.add(answer.get(n));
        a.question.add(question.get(n));
        a.akts.add(akts.get(n));
        a.GTUakts.add(GTUakts.get(n));
        a.tutor.add(tutor.get(n));
        a.code.add(code.get(n));
        a.semester.add(semester.get(n));

    }
    public void read() throws Exception{
        try {
            className = this.getClass().getSimpleName();
            className = className + ".txt";
            //openFile(className);

            readFile("mimar");

            System.out.println("mimar");
            //closeFile();
        }
        catch (Exception e) {
            ;
        }
    }

   /* public void openFile(String filer){
        try{
            scan =  new Scanner(new File(filer));

        }
        catch (Exception e){
            System.out.println(className+"couldnt found.");
            //some safe quit mechanicsm
        }

    }
 this is for now not important untinil i fugre out how to make it FR BR wihotour throw shit

*/
    public void readFile(String classzame) throws Exception

    {
        FileReader fr = null;
        BufferedReader br = null;
        try {
            fr = new FileReader("/home/paypaytr/IdeaProjects/GTUstudentClassSystem/src/mimar.txt");
            br = new BufferedReader(fr);


            String line;
            String info=null;
            while ((line = br.readLine()) != null)  //Checks what in C++ you do EOF
            {
                int infoDelim = line.indexOf(":");
                ;
                if (infoDelim != -1 && line.contains("info")!=true && line.contains("-")!=true ) {
                    line = line.substring(line.indexOf(":") + 1);
                    switch (j){
                        case 0:
                            name.add(line);
                            break;
                        case 1:
                            tutor.add(line);
                            break;
                        case 2:
                            code.add(line);
                            break;
                        case 3:
                            akts.add(Integer.valueOf(line));
                            break;
                        case 4:
                            GTUakts.add(Integer.valueOf(line));
                            ++j;
                            break;
                        case 6:
                            question.add(line);
                            break;
                        case 7:
                            answer.add(line);
                            break;
                        case 8:
                            semester.add(Integer.valueOf(line));
                        default:
                            break;

                    }
                    j++;
                }
                else if(line.contains("info")==true) {
                    line = line.substring(line.indexOf(":") + 1);
                    info=line;
                    line=info;
                }
                else if(line.contains("-")==true){
                    i++;
                    j=0;
                }
                else {
                    info+=line;
                    information.add(5,info);
                }

                ;  //Here I am just implementing, how to print string after ":", you can process the string stored in variable line as per your convenience

                //System.out.println("1-"+line);
            }
            br.close();
            fr.close();
        }
        catch (Exception e) {
            System.out.print("som");            // Always must return something
        }


    }

/*    public void closeFile(){
        scan.close();
    }
    */


}
