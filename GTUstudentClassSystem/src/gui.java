/**
 * Created by paypaytr on 8/13/17.
 */
import javax.swing.*;
import javax.swing.plaf.synth.SynthEditorPaneUI;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import static javax.swing.SwingConstants.SOUTH;

public class gui extends JPanel {
    private JLabel yazi;
    private JLabel labe4;
    private JButton buton;
    private JButton buton2;
    private JLabel resim;
    private JTextField text;
    private  String name_surname;
    private ImageIcon icon;
    private int i=0;
    private JTable jt;
    private String [] col = {"name","tutor","kod","akts","gtuakts","info","soru","cevap"};
    public String [][] data ={
            {"name","tutor","kod","akts","gtuakts","info","soru","cevap"},
    {"name","tutor","kod","akts","gtuakts","info","soru","cevap"},
    {"name","tutor","kod","akts","gtuakts","info","soru","cevap"},
    {"name","tutor","kod","akts","gtuakts","info","soru","cevap"},
    {"name","tutor","kod","akts","gtuakts","info","soru","cevap"},
    {"name","tutor","kod","akts","gtuakts","info","soru","cevap"},
    {"name","tutor","kod","akts","gtuakts","info","soru","cevap"},
    {"name","tutor","kod","akts","gtuakts","info","soru","cevap"}
    };


    public gui(Job our){

        JFrame ar = new JFrame();
        setLayout(new FlowLayout());



        ar.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        ar.setSize(500,500);
        // ar.pack();

        ar.setVisible(true);
        ar.setTitle("guiTesting in Progress");
        //ar.setBackground(Color.blue);
        ar.add(this);
        this.setBackground(Color.blue);
        icon = new ImageIcon(getClass().getResource("logo.jpg"));
        labe4=new JLabel(icon);
        add(labe4);
        buton=new JButton("ORIGINAL");

        add(buton);

        buton2=new JButton("CUSTOM");
        add(buton2);


        for(int a=0;a<8;a++){
            for(int b=0;b<8;b++){
                switch(b){
                    case 0:
                       String sari = our.name.get(a);
                        System.out.print(sari);
                        data[0][0]=sari;
                        break;
                    case 1:
                        data[a][b]=our.tutor.get(a);
                        break;
                    case 2:
                        data[a][b]=our.code.get(a);
                        break;
                    case 3:
                        data[a][b]=Integer.toString(our.akts.get(a));
                        break;
                    case 4:
                        data[a][b]=Integer.toString(our.GTUakts.get(a));
                        break;
                    case 5:
                        data[a][b]=our.information.get(a);
                        break;
                    case 6:
                        data[a][b]=our.question.get(a);
                        break;
                    case 7:
                        data[a][b]=our.answer.get(a);
                        break;


                }
            }
        }



        polis p = new polis();
        buton.addActionListener(p);






    }
    public class polis implements ActionListener{
        public void actionPerformed(ActionEvent act){
            buton.setVisible(false);
            buton2.setVisible(false);
            remove(buton);
            remove(buton2);
            yazi=new JLabel("Adinizi ve Soyadinizi girin:");
            add(yazi);
            text=new JTextField(10);
            add(text);
            buton=new JButton("Click to generate program");
            add(buton);
            buton.setVisible(true);

            i++;
            polis2 pe=new polis2();
            buton.addActionListener(pe);



        }

    }
    public class polis2 implements ActionListener{
        public void actionPerformed(ActionEvent akt){
            name_surname=text.getText();
            buton.setVisible(false);
            yazi.setVisible(false);
            text.setVisible(false);
            labe4.setVisible(false);
            remove(yazi);
            remove(text);
            remove(buton);
            remove(labe4);

            // buton=new JButton("Something?");
            //add(buton);

            jt = new JTable(data,col)
            {
                public boolean isCellEditable(int data,int columns){
                    return false;
                }
            };
            jt.setPreferredScrollableViewportSize(new Dimension(200,50));
            jt.setFillsViewportHeight(true);

            add(jt);
            labe4=new JLabel(icon);
            add(labe4);

            buton = new JButton("Click for Ders Programi");
            add(buton);
            polis3 pep = new polis3();
            buton.addActionListener(pep);



        }
    }


    public class polis3 implements ActionListener{
        public void actionPerformed(ActionEvent akt){
            buton.setVisible(false);
            labe4.setVisible(false);
            jt.setVisible(false);
            remove(jt) ;
            remove(buton);
            remove(labe4);


            String [] col = {"name","data","fa"};

            String [][] column = { {"john","female","fa"},{"john","female","fa"},{"john","female","fa"},{"john","female","fa"}
                    ,{"john","female","fa"}};
            jt = new JTable(column,col)
            {
                public boolean isCellEditable(int data,int columns){
                    return false;
                }
            };
            jt.setPreferredScrollableViewportSize(new Dimension(200,50));
            jt.setFillsViewportHeight(true);

            add(jt);
            labe4=new JLabel(icon);
            add(labe4);



        }
    }



}

