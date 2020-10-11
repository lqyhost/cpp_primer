#include <iostream>
#include "sales.h"



namespace SALES
{
    Sales::Sales()
    {
        int i;
        for (i = 0; i<QUARTERS; i++)
        {
            std::cout<<"sales "<<i<<": ";
            std::cin>>this->sales[i];
            if (!std::cin)
            {
                break;
            }
                
        }
        double sum = 0;
        this->max = this->min = this->sales[0];
        for (int j = 1; j < i; j++)
        {
            if (this->max < this->sales[j])
                this->max = this->sales[j];
            if (this->min > this->sales[j])
                this->min = this->sales[j];
            sum += this->sales[j];
        }
        this->averages = sum/i;
    }
    Sales::Sales(const double ar[], int n)
    {
        memcpy(this->sales, ar, n * sizeof(double));
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (this->max < this->sales[i])
                this->max = this->sales[i];
            if (this->min > this->sales[i])
                this->min = this->sales[i];
            sum += this->sales[i];
        }
        this->averages = sum/n;
    }

    void Sales::showSales()
    {
        std::cout<<"Sales: "<<std::endl;
        std::cout<<"sales: {"<<this->sales[0]<<", "<<this->sales[1]<<", "<<this->sales[2]<<", "<<this->sales[3]<<"}"<<std::endl;
        std::cout<<"average: "<<this->averages<<std::endl;
        std::cout<<"max: "<<this->max<<std::endl;
        std::cout<<"min: "<<this->min<<std::endl;
    }
}