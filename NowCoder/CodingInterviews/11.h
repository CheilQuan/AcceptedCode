/************************************************
  FileName    : 11.h                            ;
  Description :                                 ;
  Creator     : Chirl                           ;
  Contact     : ChirlChen@163.com               ;
  CreatedDate : 2017/02/27                      ;
              _                                 ;
             /  \         ��                    ;     
            /|oo \         ��                   ;    
           (_|  /_)       ��                    ;   
             `@/  \   _    ��                   ;    
             |     \  \\  ¥                    ;   
              \||   \  ))  !!                   ;    
              |||\ / \//                        ; 
            _//|| _\  /                         ;
    ______(_/(_|(____/_________                 ;
*************************************************/
#ifndef _11_H_
#define _11_H_

#pragma execution_character_set("utf-8")

namespace Wcytem
{
    class Solution_11
    {
    public:
        int NumberOf1(int n) {
            int NumOf1 = 0;
            int temp = 1;
            for (int i = 0; i < 8*sizeof(n); i++)
            {
                if(temp&n)
                {
                    NumOf1++;
                }
               n>>=1;
            }
            return NumOf1;
        }
        //����ע�Ͳ���;
        static void test()
        {
            Solution_11 su;
            int a = su.NumberOf1(-2);

        }
    };

}


#endif //!_11_H_
