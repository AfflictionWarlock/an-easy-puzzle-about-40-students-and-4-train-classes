#include<iostream>



class vector_bases
{
public:
    int two_array[15];
    int number_of_bases;


public:
    vector_bases(int number)
    {
        int temp_int=number;
        int i=0;
        do
        {
            temp_int=temp_int/2;
            i++;
            std::cout<<" "<<i<<" \n";
        }
        while(temp_int != 0);

        for(temp_int=0;temp_int<15;temp_int++) {two_array[temp_int]=0;printf("gg");}

        temp_int=number;

        for(i=i-1;i>=0;i--)
        {
            two_array[i]=temp_int%2;
            temp_int=temp_int/2;

        }


        number_of_bases=0;
        for(int i = 0 ; i<15 ; i++)
        {
            if (two_array[i] != 0)
                number_of_bases++;
        }

    }

     int check_array(void)
    {
        int* two;
        two=this->two_array;
        int temp1,temp2,result;


        for (int i =0 ; i < 15 ; i++)
        {
            if ( two[i] != 0 )
            {
                for (int j =i+1 ; j <15 ; j++)
                {
                    if ( two[j] != 0  )
                    {
                        temp1 = i+1;
                        temp2 = j+1;
                        result = ((temp1 & temp2)>0)?1:0;
                        if (result == 1)
                        {
                        return 0;
                        }
                    }
                }
            }
            else
                continue;

        }
                          //std::cout<<"gg21"<<"\n";
        int check_a,check_b,check_c,check_d;
        check_a= *(two+7)+*(two+8)+*(two+9)+*(two+10)+*(two+11)+*(two+12)+*(two+13)+*(two+14);
        check_b= *(two+3)+*(two+4)+*(two+5)+*(two+6)+*(two+11)+*(two+12)+*(two+13)+*(two+14);
        check_c= *(two+1)+*(two+2)+*(two+5)+*(two+6)+*(two+9)+*(two+10)+*(two+13)+*(two+14);
        check_d= *(two+0)+*(two+2)+*(two+4)+*(two+6)+*(two+8)+*(two+10)+*(two+12)+*(two+14);
        if ((check_a * check_b *check_c *check_d)==0 )
        {
            return 0;
        }
        else






        return 1;
    }


    int count_arry(void)
    {
        int total_student=40;
        int number_of_bases = this->number_of_bases;


        int *p_none_zero_bases;
        p_none_zero_bases = (int*)(malloc( 4*number_of_bases * sizeof(int) ));



        for(int i = 0,j = 0 ; i<15 ; i++)
        {
            if (this->two_array[i] = 1)
            {
                switch (i)
                {
                    case 0:
                        {
                            *(p_none_zero_bases+j+0)=0;
                            *(p_none_zero_bases+j+1)=0;
                            *(p_none_zero_bases+j+2)=0;
                            *(p_none_zero_bases+j+3)=1;
                            break;
                        }
                    case 1:
                        {
                            *(p_none_zero_bases+j+0)=0;
                            *(p_none_zero_bases+j+1)=0;
                            *(p_none_zero_bases+j+2)=1;
                            *(p_none_zero_bases+j+3)=0;
                            break;
                        }
                    case 2:
                        {
                            *(p_none_zero_bases+j+0)=0;
                            *(p_none_zero_bases+j+1)=0;
                            *(p_none_zero_bases+j+2)=1;
                            *(p_none_zero_bases+j+3)=1;
                            break;
                        }
                    case 3:
                        {
                            *(p_none_zero_bases+j+0)=0;
                            *(p_none_zero_bases+j+1)=1;
                            *(p_none_zero_bases+j+2)=0;
                            *(p_none_zero_bases+j+3)=0;
                            break;
                        }
                    case 4:
                        {
                            *(p_none_zero_bases+j+0)=0;
                            *(p_none_zero_bases+j+1)=1;
                            *(p_none_zero_bases+j+2)=0;
                            *(p_none_zero_bases+j+3)=1;
                            break;
                        }
                    case 5:
                        {
                            *(p_none_zero_bases+j+0)=0;
                            *(p_none_zero_bases+j+1)=1;
                            *(p_none_zero_bases+j+2)=1;
                            *(p_none_zero_bases+j+3)=0;
                            break;
                        }
                    case 6:
                        {
                            *(p_none_zero_bases+j+0)=0;
                            *(p_none_zero_bases+j+1)=1;
                            *(p_none_zero_bases+j+2)=1;
                            *(p_none_zero_bases+j+3)=1;
                            break;
                        }
                    case 7:
                        {
                            *(p_none_zero_bases+j+0)=1;
                            *(p_none_zero_bases+j+1)=0;
                            *(p_none_zero_bases+j+2)=0;
                            *(p_none_zero_bases+j+3)=0;
                            break;
                        }
                    case 8:
                        {
                            *(p_none_zero_bases+j+0)=1;
                            *(p_none_zero_bases+j+1)=0;
                            *(p_none_zero_bases+j+2)=0;
                            *(p_none_zero_bases+j+3)=1;
                            break;
                        }
                    case 9:
                        {
                            *(p_none_zero_bases+j+0)=1;
                            *(p_none_zero_bases+j+1)=0;
                            *(p_none_zero_bases+j+2)=1;
                            *(p_none_zero_bases+j+3)=0;
                            break;
                        }
                    case 10:
                        {
                            *(p_none_zero_bases+j+0)=1;
                            *(p_none_zero_bases+j+1)=0;
                            *(p_none_zero_bases+j+2)=1;
                            *(p_none_zero_bases+j+3)=1;
                            break;
                        }
                    case 11:
                        {
                            *(p_none_zero_bases+j+0)=1;
                            *(p_none_zero_bases+j+1)=1;
                            *(p_none_zero_bases+j+2)=0;
                            *(p_none_zero_bases+j+3)=0;
                            break;
                        }
                    case 12:
                        {
                            *(p_none_zero_bases+j+0)=1;
                            *(p_none_zero_bases+j+1)=1;
                            *(p_none_zero_bases+j+2)=0;
                            *(p_none_zero_bases+j+3)=1;
                            break;
                        }
                    case 13:
                        {
                            *(p_none_zero_bases+j+0)=1;
                            *(p_none_zero_bases+j+1)=1;
                            *(p_none_zero_bases+j+2)=1;
                            *(p_none_zero_bases+j+3)=0;
                            break;
                        }
                    case 14:
                        {
                            *(p_none_zero_bases+j+0)=1;
                            *(p_none_zero_bases+j+1)=1;
                            *(p_none_zero_bases+j+2)=1;
                            *(p_none_zero_bases+j+3)=1;
                            break;
                        }
                }

                j=j+4;
            }
        }

        int accum_a,accum_b,accum_c,accum_d;
        accum_a=accum_b=accum_c=accum_d=0;
        int count_max_number=0;
        int history_min_count_max_number=40;
        //int best_base_1[4],best_base_2[4],best_base_3[4],best_base_4[4],best_base_5[4],best_base_6[4],best_base_7[4];
        //int best_base_1_num,best_base_2_num,best_base_3_num,best_base_4_num,best_base_5_num,best_base_6_num,best_base_7_num;

        switch (number_of_bases)
        {
            case 3:
            {
                int base_1,base_2,base_3;
                base_1=base_2=1;

                for ( ; base_1 < 40 ; base_1++)
                {
                    for ( ; base_2 < 40 ; base_2++)
                    {

                        base_3=40-base_1-base_2;
                        if(base_3 <= 0) break;

                        accum_a=*(p_none_zero_bases+0) * base_1 + *(p_none_zero_bases+4) * base_2 +*(p_none_zero_bases+8) * base_3 ;
                        accum_b=*(p_none_zero_bases+1) * base_1 + *(p_none_zero_bases+5) * base_2 +*(p_none_zero_bases+9) * base_3 ;
                        accum_c=*(p_none_zero_bases+2) * base_1 + *(p_none_zero_bases+6) * base_2 +*(p_none_zero_bases+10) * base_3 ;
                        accum_d=*(p_none_zero_bases+3) * base_1 + *(p_none_zero_bases+7) * base_2 +*(p_none_zero_bases+11) * base_3 ;
                        count_max_number = ((accum_a>accum_b)?accum_a:accum_b);
                        count_max_number = ((count_max_number>accum_c)?count_max_number:accum_c);
                        count_max_number = ((count_max_number>accum_d)?count_max_number:accum_d);

                        if(history_min_count_max_number>count_max_number)
                        {
                            history_min_count_max_number = count_max_number;
                            for(int i=0 ;i < 12;i++) std::cout<<" "<<*(p_none_zero_bases + i)<<" ";

                            std::cout<< base_1<<" "<<base_2 <<" "<< base_3<<"\n";
                        }
                    }
                }
                break;
            }

            case 4:
            {
                int base_1,base_2,base_3,base_4;
                base_1=base_2=base_3=1;

                for ( ; base_1 < 40 ; base_1++)
                {
                    for ( ; base_2 < 40 ; base_2++)
                    {
                        for(; base_3 < 40 ; base_3++)
                        {

                            base_4=40-base_1-base_2-base_3;
                            if(base_4 <= 0) break;

                            accum_a=*(p_none_zero_bases+0) * base_1 + *(p_none_zero_bases+4) * base_2 +*(p_none_zero_bases+8) * base_3  +*(p_none_zero_bases+12) * base_4;
                            accum_b=*(p_none_zero_bases+1) * base_1 + *(p_none_zero_bases+5) * base_2 +*(p_none_zero_bases+9) * base_3  +*(p_none_zero_bases+13) * base_4;
                            accum_c=*(p_none_zero_bases+2) * base_1 + *(p_none_zero_bases+6) * base_2 +*(p_none_zero_bases+10) * base_3 +*(p_none_zero_bases+14) * base_4;
                            accum_d=*(p_none_zero_bases+3) * base_1 + *(p_none_zero_bases+7) * base_2 +*(p_none_zero_bases+11) * base_3 +*(p_none_zero_bases+15) * base_4;
                            count_max_number = ((accum_a>accum_b)?accum_a:accum_b);
                            count_max_number = ((count_max_number>accum_c)?count_max_number:accum_c);
                            count_max_number = ((count_max_number>accum_d)?count_max_number:accum_d);

                            if(history_min_count_max_number>count_max_number)
                            {
                                history_min_count_max_number = count_max_number;
                                for(int i=0 ;i < 16;i++) std::cout<<" "<<*(p_none_zero_bases + i)<<" ";

                                std::cout<< base_1<<" "<<base_2 <<" "<< base_3<<base_4<<"\n";
                            }
                        }
                    }
                }
                break;
            }

            case 5:
            {
                int base_1,base_2,base_3,base_4,base_5;
                base_1=base_2=base_3=base_4=1;

                for ( ; base_1 < 40 ; base_1++)
                {
                    for ( ; base_2 < 40 ; base_2++)
                    {
                        for(; base_3 < 40 ; base_3++)
                        {
                            for(; base_4 < 40 ; base_4++)
                            {
                                base_5=40-base_1-base_2-base_3-base_4;
                                if(base_5 <= 0) break;

                                accum_a=*(p_none_zero_bases+0) * base_1 + *(p_none_zero_bases+4) * base_2 +*(p_none_zero_bases+8) * base_3  +*(p_none_zero_bases+12) * base_4 +*(p_none_zero_bases+16) * base_5;
                                accum_b=*(p_none_zero_bases+1) * base_1 + *(p_none_zero_bases+5) * base_2 +*(p_none_zero_bases+9) * base_3  +*(p_none_zero_bases+13) * base_4 +*(p_none_zero_bases+17) * base_5;
                                accum_c=*(p_none_zero_bases+2) * base_1 + *(p_none_zero_bases+6) * base_2 +*(p_none_zero_bases+10) * base_3 +*(p_none_zero_bases+14) * base_4 +*(p_none_zero_bases+18) * base_5;
                                accum_d=*(p_none_zero_bases+3) * base_1 + *(p_none_zero_bases+7) * base_2 +*(p_none_zero_bases+11) * base_3 +*(p_none_zero_bases+15) * base_4 +*(p_none_zero_bases+19) * base_5;
                                count_max_number = ((accum_a>accum_b)?accum_a:accum_b);
                                count_max_number = ((count_max_number>accum_c)?count_max_number:accum_c);
                                count_max_number = ((count_max_number>accum_d)?count_max_number:accum_d);

                                if(history_min_count_max_number>count_max_number)
                                {
                                    history_min_count_max_number = count_max_number;
                                    for(int i=0 ;i < 20;i++) std::cout<<" "<<*(p_none_zero_bases + i)<<" ";

                                    std::cout<< base_1<<" "<<base_2 <<" "<< base_3<<" "<<base_4<<" "<<base_5<<"\n";
                                }
                            }


                        }
                    }
                }
                break;
            }

            case 6:
            {
                int base_1,base_2,base_3,base_4,base_5,base_6;
                base_1=base_2=base_3=1;

                for ( ; base_1 < 40 ; base_1++)
                {
                    for ( ; base_2 < 40 ; base_2++)
                    {
                        for(; base_3 < 40 ; base_3++)
                        {
                            for(; base_4 < 40 ; base_4++)
                            {
                                for(; base_5 < 40 ; base_5++)
                                {
                                    base_6=40-base_1-base_2-base_3-base_4-base_5;
                                    if(base_6 <= 0) break;

                                    accum_a=*(p_none_zero_bases+0) * base_1 + *(p_none_zero_bases+4) * base_2 +*(p_none_zero_bases+8) * base_3  +*(p_none_zero_bases+12) * base_4 +*(p_none_zero_bases+16) * base_5 +*(p_none_zero_bases+20) * base_6;
                                    accum_b=*(p_none_zero_bases+1) * base_1 + *(p_none_zero_bases+5) * base_2 +*(p_none_zero_bases+9) * base_3  +*(p_none_zero_bases+13) * base_4 +*(p_none_zero_bases+17) * base_5 +*(p_none_zero_bases+21) * base_6;
                                    accum_c=*(p_none_zero_bases+2) * base_1 + *(p_none_zero_bases+6) * base_2 +*(p_none_zero_bases+10) * base_3 +*(p_none_zero_bases+14) * base_4 +*(p_none_zero_bases+18) * base_5 +*(p_none_zero_bases+22) * base_6;
                                    accum_d=*(p_none_zero_bases+3) * base_1 + *(p_none_zero_bases+7) * base_2 +*(p_none_zero_bases+11) * base_3 +*(p_none_zero_bases+15) * base_4 +*(p_none_zero_bases+19) * base_5 +*(p_none_zero_bases+23) * base_6;
                                    count_max_number = ((accum_a>accum_b)?accum_a:accum_b);
                                    count_max_number = ((count_max_number>accum_c)?count_max_number:accum_c);
                                    count_max_number = ((count_max_number>accum_d)?count_max_number:accum_d);

                                    if(history_min_count_max_number>count_max_number)
                                    {
                                        history_min_count_max_number = count_max_number;
                                        for(int i=0 ;i < 24;i++) std::cout<<" "<<*(p_none_zero_bases + i)<<" ";

                                        std::cout<< base_1<<" "<<base_2 <<" "<< base_3<<" "<<base_4<<" "<<base_5<<" "<<base_6<<"\n";
                                    }
                                }
                            }
                        }
                    }
                }
                break;
            }


            default:
                return 99;
        }



        free(p_none_zero_bases);
        return 0;

    }


};



