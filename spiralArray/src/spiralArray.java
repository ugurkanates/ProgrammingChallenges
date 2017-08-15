import java.util.Scanner;

/**
 * Created by paypaytr on 8/15/17.
 */
public class spiralArray {
    private final int SIZE = 10;
    private final int no = -1;
    private int yes = 0;
    Scanner a;
    private int num;
    private int direction = 0; // 0 for right 1 for left 2 for up 3 for down
    private int array[][] = new int[SIZE][SIZE];

    //main class for intends

    //constructor for shits

    public spiralArray() {
        System.out.println("Enter input integer for spiral");
        a = new Scanner(System.in);
        num = a.nextInt();
        initArr(num);
        core(num);
        System.out.print("allah");
    }

    public static void main(String args[]){
        spiralArray a=new spiralArray();


    }

    public void initArr(int num) {
        for (int i = 0; i < num; i++) {
            for (int j = 0; j < num; j++)
                array[i][j] = no;
        }
    }

    public void core(int a) {
        int i = 0, j = 0;
        while (yes < a*a) {
            while (yes < a*a) {
                if (array[i][j] == no) {
                    array[i][j] = yes;
                    yes++;
                    if (direction == 0) {
                            ;
                            if( inBound(i, j + 1)) {
                                if (array[i][j + 1] == no) {
                                    j++;
                                    break;
                                }
                            }
                                    if (inBound(i + 1, j)) {
                                        if (array[i + 1][j] == no) {
                                            i++;
                                            direction = 2;
                                            break;
                                        }
                                    }
                                    if (inBound(i - 1, j)) {
                                        if (array[i - 1][j] == no) {
                                            i--;
                                            direction = 3;
                                            break;
                                        }

                                    }

                    }

                }else if (direction == 1) {
                    if (inBound(i, j - 1)  ) {
                        if (array[i][j - 1] == no) {
                            j--;
                            break;
                        }
                    }
                        if (inBound(i + 1, j)) {
                                if (array[i + 1][j] == no) {
                                    i++;
                                    direction = 2;
                                    break;
                                }
                            }
                            if (inBound(i - 1, j)) {
                                if (array[i - 1][j] == no) {
                                    i--;
                                    direction = 3;
                                    break;
                                }
                            }


                    }


                    else if (direction == 2) {
                        if ( inBound(i + 1, j) ) {
                            if(  array[i + 1][j] == no) {
                                i++;
                                break;
                            }
                         else {
                                if (inBound(i, j + 1)) {
                                    if (array[i][j + 1] == no) {
                                        j++;
                                        direction = 0;
                                        break;
                                    }
                                }
                                if (inBound(i, j - 1)) {
                                    if (array[i][j - 1] == no) {
                                        j--;
                                        direction = 1;
                                        break;
                                    }
                                }
                            }
                        }

                    } else if (direction == 3) {
                        if (inBound(i - 1, j)) {
                            if (array[i - 1][j] == no) {
                                i--;
                                break;
                            }
                        }
                            if (inBound(i, j + 1)) {
                                    if (array[i][j + 1] == no) {
                                        j++;
                                        direction = 0;
                                        break;
                                    }
                                }
                                if (inBound(i, j - 1)) {
                                    if (array[i][j - 1] == no) {
                                        j--;
                                        direction = 1;
                                        break;
                                    }
                                }


                        }



                }
            }

        }

    public boolean inBound(int i,int j){
        if((i<array.length  && i>=0) && (j>=0 && j<array.length))
            return true;
        else
            return false;
    }
}
