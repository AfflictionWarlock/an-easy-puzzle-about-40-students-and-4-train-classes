#include<iostream>
#include<vector>
#include<algorithm>
#include"class_surpport.cpp"
using namespace std;

int pow(int button,int top);




int main()
{
    int answer=40;

   for (int code_num=1 ; code_num < 10000 ;code_num ++)
   {
       class bases waiting_test_bases=bases(code_num);
       waiting_test_bases.convert_int_to_bases_vector();
       waiting_test_bases.check_by_multi_each_bases();
       waiting_test_bases.check_contain_4_elements();
       if(waiting_test_bases.flag_whether_qualitifed_bases == 00)
       {
           //continue;
       }
       else
       {
           waiting_test_bases.recursion(waiting_test_bases.bases_vector.size(),40);

           if (waiting_test_bases.history_best_min_of_max_element < answer)
           {

               answer =waiting_test_bases.history_best_min_of_max_element;
                cout<<waiting_test_bases.bases_code<<"\n";
                cout<<waiting_test_bases.history_best_min_of_max_element<<"\n";

           }



       }



   }




printf("end");
getchar();
return 0;
}













int pow(int button, int top)
{
    if (top == 1)
    {
        return button;
    }
    else
    {
         return button*pow(button,top -1);
    }

}



