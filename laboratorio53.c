#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>

typedef struct{
    char name[50];
    char brand[50];
    float price;
}products;
typedef struct{
    char brand[50];
    int countProd;
    float sumProducts;
}brand;


int main (){
    float somatorio = 0;
    int validator;
    char buffer[200];
    products prod[8];
    int counterBrand = 1;

    for (int i = 0; i < 8; i++)
    {
        validator = 0;
        fgets(buffer,200,stdin);
        sscanf(buffer,"%s %s %f", prod[i].name, prod[i].brand, &prod[i].price);
        somatorio += prod[i].price;
        if (i>0)
        {
            for (int j = 0; j < i; j++)
            {
                if (strcmp(prod[i].brand,prod[j].brand)== 0)
                {
                    validator = 1;
                    break;
                }
                
            }
            if (validator == 0)
            {
                counterBrand++;
            }
            
            
        }
        
    }
    brand marca[counterBrand];
    strcpy(marca[0].brand, prod[0].brand);
    marca[0].countProd = 1;
    marca[0].sumProducts = prod[0].price;
    int cursor = 1;
    for (int i = 1; i < 8; i++)
    {
        validator = 0;
        for (int j = 0; j < counterBrand; j++)
        {
            if (strcmp(prod[i].brand, marca[j].brand)==0)
            {
                marca[j].countProd++;
                marca[j].sumProducts += prod[i].price;
                validator = 1;
                break;
            }
            
        }
        if (!validator)
        {
            strcpy(marca[cursor].brand,prod[i].brand);
            marca[cursor].countProd = 1;
            marca[cursor].sumProducts = prod[i].price;
            cursor++;
        }
        
    }
    for (int i = 0; i < counterBrand; i++)
    {
        printf("%s %d\n",marca[i].brand,marca[i].countProd);
    }
    printf("media total %.2f\n",somatorio/8.0);
    for (int i = 0; i < counterBrand; i++)
    {
        printf("media %s %.2f\n",marca[i].brand,marca[i].sumProducts/marca[i].countProd);
    }
    

    
    return 0;
}