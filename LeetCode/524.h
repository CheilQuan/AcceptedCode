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
#ifndef _524_H_
#define _524_H_
#include <vector>
using namespace std;

namespace Chirl
{
    class Solution_524
    {
    public:
        /************************************************************************
         ˼·�� ���δ�d��ȡ��һ���ַ���bs;
                ���ַ�ȥ�鿴bs�е��ַ���s���Ƿ����;
                ����ͬһ���ַ���bs��s���ҹ����ַ������ظ�����;
                ���, bs�����е��ַ���s�ж����ҵ�������ַ��ǿ��ܵķ���ֵ;
                      ��֮���ǿ��ܵķ���ֵ;
                ���������ҵ��������b���±���С���ַ���bs;
         �㷨���Ӷȣ�;
                s�ĳ��ȣ�m; d�ĳ��ȣ�n; d���ַ���ƽ�����ȣ�k
                ���Ӷȣ�O(m*n);
        ************************************************************************/
        string findLongestWord(string s, vector<string>& d)
        {
            if (d.empty() || s.empty())
            {
                return string();
            }

            string resultStr;           //���ܵĽ���ַ���;
            int curMaxLen = 0;          //��ǰ�ַ��͵���󳤶�; 
            int dictSize = d.size();
            for (int i = 0; i < dictSize; i++)
            {
                if (d[i].size() > s.size() || d[i].size() < curMaxLen)
                {
                    continue;
                }

                const char *pds = d[i].c_str();
                const char *ps  = s.c_str();
                while (*ps != '\0')
                {
                    if (*pds == *ps)
                    {
                        pds++;
                    }
                    if ('\0' == *pds)   //�ֵ�d�е�ǰ�ַ���ȫ���ҵ�;
                    {
                        if (curMaxLen < d[i].size()) //���ΪĿǰ�������·��ؽ��;
                        {
                            resultStr = d[i];
                            curMaxLen = d[i].size();
                        }
                        else if (curMaxLen == d[i].size() && 
                                 0 > strcmp(d[i].c_str(), resultStr.c_str()))
                        {
                            resultStr = d[i];
                        }
                        break;
                    }
                    ps++;
                }
            }
            return resultStr;
        }
  
        static void test()
        {
            string s = "bab";//"abpcplea";
            string tmps[] = {"ba","ab","a","b"};//{"ale","apple","monkey","plea"};
            vector<string> d(begin(tmps), end(tmps)); 
            
            Solution_524 su;
            string str = su.findLongestWord(s, d);
        }
    };
  
}


#endif //!_524_H_