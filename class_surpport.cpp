
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class bases
{
public:
    vector< vector<int> > bases_emun_vector
    {
        {0,0,0,1},
        {0,0,1,0},
        {0,0,1,1},
        {0,1,0,0},
        {0,1,0,1},
        {0,1,1,0},
        {0,1,1,1},
        {1,0,0,0},
        {1,0,0,1},
        {1,0,1,0},
        {1,0,1,1},
        {1,1,0,0},
        {1,1,0,1},
        {1,1,1,0},
        {1,1,1,1}
    };


    int bases_code;

    vector< vector<int> > bases_vector;
    int flag_whether_qualitifed_bases;

    int history_best_min_of_max_element=40;
    int current_min_of_max_element;
    vector<int> history_best_value_in_each_base;
    vector<int> current_best_value_in_each_base;






public:
/*    void print_bases();

    void convert_int_to_bases_vector();

    void check_by_multi_each_bases();
    void check_contain_4_elements();
    void check_contain_15th_element();

    void accumulate_best_result();
    void recursion(int piece,int total);

*/
////////////////////////////////////////////
//
//
////////////////////////////////////////////
    bases(int input_number)
    {
        bases_code =input_number;
        if (input_number>32767)  printf("error");
    }
////////////////////////////////////////////
//
//
////////////////////////////////////////////




    void convert_int_to_bases_vector()
    {
        vector<int> temp_stack;
        int temp_number = bases_code;
        while(temp_number!=0)
        {
            temp_stack.push_back( temp_number % 2 );
            temp_number = temp_number / 2;
        }

        for(int i = temp_stack.size() ; i > 0 ; i-- )
        {
            if (temp_stack[i-1] == 0)
            {
                continue;
            }
            else
            {
                bases_vector.push_back(bases_emun_vector[i-1]);
            }
        }
}

    void check_by_multi_each_bases()
    {
        for(int i = 0 ; i < bases_vector.size() ; i++)
        {
            for (int j = i + 1 ; j < bases_vector.size(); j++)
                {
                    vector<int> temp_i = bases_vector[i];
                    vector<int> temp_j = bases_vector[j];
                    int temp_k = 0;
                    for(int k = 0 ;k < 4 ;k++ )
                    {
                        temp_k = temp_k + temp_i[k] * temp_j[k];
                    }

                    if( temp_k == 0 )
                    {
                        flag_whether_qualitifed_bases = 0;
                        return ;
                    }
                }
        }
        flag_whether_qualitifed_bases = 1;
        return ;
    }



    void check_contain_4_elements()
    {
        vector< vector<int> >::iterator it;
        vector<int> target_4_elemets{0,0,0,0};

        for( it = bases_vector.begin() ; it != bases_vector.end() ; it++ )
        {
            vector<int> temp_4_elemets = *it;
            target_4_elemets[0] = target_4_elemets[0] + temp_4_elemets[0];
            target_4_elemets[1] = target_4_elemets[1] + temp_4_elemets[1];
            target_4_elemets[2] = target_4_elemets[2] + temp_4_elemets[2];
            target_4_elemets[3] = target_4_elemets[3] + temp_4_elemets[3];
        }
        if (target_4_elemets[0]*target_4_elemets[1]*target_4_elemets[2]*target_4_elemets[3] == 0)
        {
            flag_whether_qualitifed_bases = 0;
            return;
        }


    }






    void check_contain_15th_element()
    {
        vector< vector<int> >::iterator it;
        vector<int> target_15th_elemet{1,1,1,1};

        for( it = bases_vector.begin() ; it != bases_vector.end() ; it++ )
        {
            if (*it == target_15th_elemet)
            {
                flag_whether_qualitifed_bases = 0;
                return;
            }
        }
    }

    void accumulate_best_result()
    {
        //生成排列，求取当前值，比较，替换，重新生成排列……
        int number_of_bases=bases_vector.size();
        int total_number=40;

        if (number_of_bases == 2)
        {
            for (int temp_i = 1 ; temp_i < total_number ; temp_i++)
            {
                current_best_value_in_each_base.push_back(temp_i);
                current_best_value_in_each_base.push_back(total_number - temp_i);
                //do someting.
                current_best_value_in_each_base.pop_back();
                current_best_value_in_each_base.pop_back();

            }
        }
        for (int count_point_not_pointer = 1 ; count_point_not_pointer <= total_number-2 ; count_point_not_pointer++)
        {
            current_best_value_in_each_base.push_back(count_point_not_pointer);


        }




    }

    //static vector<int> each_number_of_piece ;
    void recursion(int piece,int total)
    {

        static vector<int> each_number_of_piece ;

        if ( piece == 2 )
        {
            for ( int temp_i = 1 ; temp_i <total ;temp_i++)
            {
                each_number_of_piece.push_back(temp_i);
                each_number_of_piece.push_back(total - temp_i);
                //do something.

                //把基的系数转为最终的结果
                int temp_a,temp_b,temp_c,temp_d;
                temp_a=temp_b=temp_c=temp_d=0;
                for(int temp_k=0;temp_k<each_number_of_piece.size();temp_k++)
                {

                    vector<int> temp_vector = bases_vector[temp_k];
                    temp_a = temp_a + each_number_of_piece[temp_k]*temp_vector[0];
                    temp_b = temp_b + each_number_of_piece[temp_k]*temp_vector[1];
                    temp_c = temp_c + each_number_of_piece[temp_k]*temp_vector[2];
                    temp_d = temp_d + each_number_of_piece[temp_k]*temp_vector[3];
                }
                int temp_e,temp_min_of_max;
                temp_e=(temp_a>temp_b)?temp_a:temp_b;
                temp_min_of_max=(temp_c>temp_d)?temp_c:temp_d;
                temp_min_of_max=(temp_min_of_max>temp_e)?temp_min_of_max:temp_e;

                //针对最终
                if (temp_min_of_max < history_best_min_of_max_element)
                {
                    history_best_min_of_max_element=temp_min_of_max;
                    history_best_value_in_each_base=each_number_of_piece;

                    //cout<<"ID "<<bases_code<<" best "<<history_best_min_of_max_element<<"\n";
                }



                //do something.
                each_number_of_piece.pop_back();
                each_number_of_piece.pop_back();

            }
            return;

        }
        for (int count_point_not_pointer = 1 ;count_point_not_pointer < total - 1; count_point_not_pointer++)
        {
            each_number_of_piece.push_back(count_point_not_pointer);
            bases::recursion((piece-1),(total-count_point_not_pointer));
            each_number_of_piece.pop_back();
        }

    }


};


































//跳出我的舒适区，决心用stl的容器来写一个现代化的C++程序。
/*
//four element vector
class fev
{
public:
    int fev_array[4];

public:
    fev(int fev0_,int fev1_,int fev2_ ,int fev3_)
    {
        fev_array[0]=fev0_;
        fev_array[1]=fev1_;
        fev_array[2]=fev2_;
        fev_array[3]=fev3_;
    }

    void add(class fev added_fev)
    {
        *(this->fev_array) = *(this->fev_array) + added_fev.fev_array[0];
        *(this->fev_array+1) = *(this->fev_array+1) + added_fev.fev_array[1];
        *(this->fev_array+2) = *(this->fev_array+2) + added_fev.fev_array[2];
        *(this->fev_array+3) = *(this->fev_array+3) + added_fev.fev_array[3];
    }


    void multi(int multi_number)
    {
        *(this->fev_array) = *(this->fev_array) * multi_number;
        *(this->fev_array+1) = *(this->fev_array+1) * multi_number;
        *(this->fev_array+2) = *(this->fev_array+2) * multi_number;
        *(this->fev_array+3) = *(this->fev_array+3) * multi_number;
    }

    int multi(class fev multied_fev)
    {
        int temp;
        temp = *(this->fev_array) * multied_fev.fev_array[0];
        temp = temp + *(this->fev_array) * multied_fev.fev_array[1];
        temp = temp + *(this->fev_array) * multied_fev.fev_array[2];
        temp = temp + *(this->fev_array) * multied_fev.fev_array[3];

        return temp;
    }

    int max_of_fev()
    {
        int temp1,temp2;
        temp1=(fev_array[0]>fev_array[1])?fev_array[0]:fev_array[1];
        temp2=(fev_array[2]>fev_array[3])?fev_array[2]:fev_array[3];
        temp1=(temp1>temp2)?temp1:temp2;
        return temp1;
    }

    int min_of_fev()
    {
        int temp1,temp2;
        temp1=(fev_array[0]<fev_array[1])?fev_array[0]:fev_array[1];
        temp1=(fev_array[0]<fev_array[1])?fev_array[0]:fev_array[1];
        temp1=(temp1<temp2)?temp1:temp2;
        return temp1;
    }


};
*/
