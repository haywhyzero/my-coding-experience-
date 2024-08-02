//I have no access to a compiler
//I have no access to a compiler
//I have no access to a compiler
//I have no access to a compiler

import java.util.Scanner;
public class Main {
    int computeWeightedSum (int[] a) {
        int even = 0, int odd = 0;
        for(int i = 0; i < a.length; i++){
            if(i % 2 == 0){
                //System.out.println("This is an even number");
                even += i;
            }
            else {
                //System.out.println("This is an odd number");
                odd += i;
            }
        }

        int total = (2 * even) + (3 * odd);
        return total;
    }
    
    public static main void (String[] args) {
        //get stdio and input the array in the function below to get result
        //for example
        //recall we imported our Scanner for STDIO
        """
        
        Scanner input = new Scanner(System.in);
        System.out.println("Enter number of array element: ");
        int n = input.nextInt();

        int arr[] = nee int[n];

        for(int i = 0; i < n; i ++) {
            System.out.println("Enter Array Element: ");
            aar[i] = input.nextInt();
        }
        

        //To call our function now
        computeWeightedSum(aar);
"""

    }


}