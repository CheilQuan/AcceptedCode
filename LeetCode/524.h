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
                ���ַ�ȥ�鿴ds�е��ַ���s���Ƿ����;
                ����ͬһ���ַ���ds��s���ҹ����ַ������ظ�����;
                ���, bs�����е��ַ���s�ж����ҵ�������ַ��ǿ��ܵķ���ֵ;
                      ��֮���ǿ��ܵķ���ֵ;
                ���������ҵ�������ַ�����С���ַ���;
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
            int dictSize = d.size();
            for (int i = 0; i < dictSize; i++)
            {
                if (d[i].size() > s.size() || d[i].size() < resultStr.size())
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
                        if (resultStr.size() < d[i].size() ||               //������ϴν������������·��ؽ��;
                            0 > strcmp(d[i].c_str(), resultStr.c_str()))    //�ȳ������ֵ����С;
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
  
        string findLongestWord_1(string s, vector<string>& d)   //���������˵ķ�����https://discuss.leetcode.com/topic/80876/10-lines-solutions-for-c����˼·һ��,������ܾ���;
        {
            string ans;                                         
            for (int i = 0; i < d.size(); i++) 
            {
                int pi = 0, pj = 0;
                for (; pi < s.size() && pj < d[i].size(); pi++) 
                {
                    pj += s[pi] == d[i][pj];                    //��һ�кܾ���;
                }
                if (pj == d[i].size() && (ans.size() < d[i].size() || (ans.size() == d[i].size() && strcmp(ans.c_str(),d[i].c_str()))))
                    ans = d[i];
            }
            return ans;
        }
        static void test()
        {
            string s = "abpcplea";//"bab";//
            string tmps[] = {"ale","apple","monkey","plea"};//{"ba","ab","a","b"};//
            vector<string> d(begin(tmps), end(tmps)); 
            
            Solution_524 su;
            string str = su.findLongestWord(s, d);
        }
    };
  
}


#endif //!_524_H_