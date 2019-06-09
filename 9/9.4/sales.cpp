#include <iostream>
#include "sales.h"



namespace SALES
{
    void setSales(Sales & s, const double ar[], int n)
    {
        memcpy(s.sales, ar, n * sizeof(double));
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (s.max < s.sales[i])
                s.max = s.sales[i];
            if (s.min > s.sales[i])
                s.min = s.sales[i];
            sum += s.sales[i];
        }
        s.averages = sum/n;
    }

    void setSales(Sales & s)
    {
        int i;
        for (i = 0; i<QUARTERS; i++)
        {
            std::cout<<"sales "<<i<<": ";
            std::cin>>s.sales[i];
            if (!std::cin)
            {
                break;
            }
                
        }
        double sum = 0;
        s.max = s.min = s.sales[0];
        for (int j = 1; j < i; j++)
        {
            if (s.max < s.sales[j])
                s.max = s.sales[j];
            if (s.min > s.sales[j])
                s.min = s.sales[j];
            sum += s.sales[j];
        }
        s.averages = sum/i;
    }

    void showSales(const Sales & s)
    {
        std::cout<<"Sales: "<<std::endl;
        std::cout<<"sales: {"<<s.sales[0]<<", "<<s.sales[1]<<", "<<s.sales[2]<<", "<<s.sales[3]<<"}"<<std::endl;
        std::cout<<"average: "<<s.averages<<std::endl;
        std::cout<<"max: "<<s.max<<std::endl;
        std::cout<<"min: "<<s.min<<std::endl;
    }
}