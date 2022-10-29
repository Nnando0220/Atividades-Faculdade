#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
    {
    setlocale(LC_ALL, "Portuguese");

    int arCond, comp, gel, lamp, tel, x, darCond, dComp, dGel, dLamp, dTel, set;
    int potarCond, potComp, potGel, potLamp, potTel;
    float harCond, hComp, hGel, hLamp, prearCond, preComp;
    float hTel, consarCond, consComp, consGel, consLamp, consTel, trf;
    float preGel, preLamp, preTel, finPre, preTot, consTot, preTot1=0, consTot1=0;

    printf("Digite a quantidade de setores:");
    scanf("%d", &set);
    printf("\nDigite a Tarifa Residencial de Baixa tens�o:");
    scanf("%f", &trf);

    for(x=1; x<=set; x++)
    {
    printf("\n\n\nAs contas do %d� setor ser�o inicializadas.\n\n", x);

            printf("\n\nDigite a quantidade de ar-condicionado(s):");
            scanf("%d", &arCond);
            if (arCond>0)
            {
                printf("\nDigite a pot�ncia do(s) ar-condicionado(s) em Watts:");
                scanf("%d", &potarCond);
                printf("\nDigite a quantidade de horas de uso por dia do(s) ar-condicionado(s):");
                scanf("%f", &harCond);
                printf("\nDigite a quantidade de dias no m�s de uso do(s) ar-condicionado(s):");
                scanf("%d", &darCond);
                consarCond = ((((float)harCond*darCond)*potarCond)*arCond)/1000;
                printf("\n\nO consumo, em kWh por m�s, do ar-condicionado � de %.2f kWh.", consarCond);
            }
            else
            {
                potarCond = 0;
                harCond = 0;
                darCond = 0;
                consarCond = 0;
            }

                printf("\n\n\nDigite a quantidade de computador(es):");
                scanf("%d", &comp);
                if (comp>0)
                {
                    printf("\nDigite a pot�ncia do(s) computador(es) em Watts:");
                    scanf("%d", &potComp);
                    printf("\nDigite a quantidade de horas de uso por dia do(s) computador(es):");
                    scanf("%f", &hComp);
                    printf("\nDigite a quantidade de dias no m�s de uso do(s) computador(es):");
                    scanf("%d", &dComp);
                    consComp = ((((float)hComp*dComp)*potComp)*comp)/1000;
                    printf("\n\nO consumo, em kWh por m�s, do(s) computador(es) � de %.2f kWh.", consComp);
                }
                else
                {
                    potComp= 0;
                    hComp = 0;
                    dComp = 0;
                    consComp = 0;
                }

                    printf("\n\n\nDigite a quantidade de geladeira(s):");
                    scanf("%d", &gel);
                    if (gel>0)
                    {
                        printf("\nDigite a pot�ncia da(s) geladeira(s) em Watts:");
                        scanf("%d", &potGel);
                        printf("\nDigite a quantidade de horas de uso por dia da(s) geladeira(s):");
                        scanf("%f", &hGel);
                        printf("\nDigite a quantidade de dias no m�s de uso da(s) geladeira(s):");
                        scanf("%d", &dGel);
                        consGel = ((((float)hGel*dGel)*potGel)*gel)/1000;
                        printf("\n\nO consumo, em kWh por m�s, da(s) geladeira(s) � de %.2f kWh.", consGel);
                    }
                    else
                    {
                        potGel= 0;
                        hGel = 0;
                        dGel = 0;
                        consGel = 0;
                    }

                        printf("\n\n\nDigite a quantidade de l�mpadas(s):");
                        scanf("%d", &lamp);
                        if (lamp>0)
                        {
                            printf("\nDigite a pot�ncia da(s) l�mpada(s) em Watts:");
                            scanf("%d", &potLamp);
                            printf("\nDigite a quantidade de horas de uso por dia da(s) l�mpada(s):");
                            scanf("%f", &hLamp);
                            printf("\nDigite a quantidade de dias no m�s de uso da(s) l�mpada(s):");
                            scanf("%d", &dLamp);
                            consLamp = ((((float)hLamp*dLamp)*potLamp)*lamp)/1000;
                            printf("\n\nO consumo, em kWh por m�s, da(s) l�mpada(s) � de %.2f kWh.", consLamp);
                        }
                        else
                        {
                            potLamp= 0;
                            hLamp = 0;
                            dLamp = 0;
                            consLamp = 0;
                        }

                            printf("\n\n\nDigite a quantidade do(s) televisor(es):");
                            scanf("%d", &tel);
                            if (tel>0)
                            {
                                printf("\nDigite a pot�ncia do(s) televisor(es) em Watts:");
                                scanf("%d", &potTel);
                                printf("\nDigite a quantidade de horas de uso por dia do(s) televisor(es):");
                                scanf("%f", &hTel);
                                printf("\nDigite a quantidade de dias no m�s de uso do(s) televisor(es):");
                                scanf("%d", &dTel);
                                consTel = (((((float)hTel*dTel)*potTel)*tel))/1000;
                                printf("\n\nO consumo, em kWh por m�s, do(s) televisor(es) � de %.2f kWh.", consTel);
                            }
                            else
                            {
                                potTel= 0;
                                hTel = 0;
                                dTel = 0;
                                consTel = 0;
                            }

                            prearCond = (float)trf*consarCond;
                            preComp = (float)trf*consComp;
                            preGel = (float)trf*consGel;
                            preLamp = (float)trf*consLamp;
                            preTel = (float)trf*consTel;
                            consTot = consarCond+consComp+consGel+consLamp+consTel;
                            preTot = prearCond+preComp+preGel+preLamp+preTel;

                            printf("\n\n\nOs equipamentos do %d� setor gastão (em R$):", x);
                            printf("\nO valor gasto do(s) Ar-condicionado(s) � de %.2fR$", prearCond);
                            printf("\nO valor gasto do(s) Computador(es) � de %.2fR$",preComp);
                            printf("\nO valor gasto da(s) Geladeira(s) � de %.2fR$",preGel);
                            printf("\nO valor gasto da(s) l�mpadas(s) � de %.2fR$", preLamp);
                            printf("\nO valor gasto do(s) Televisor(es) � de %.2fR$", preTel);

                            printf("\n\nOs equipamentos do %d� setor consomem (em kWh): %.2f kWh", x, consTot);
                            printf("\n\nOs equipamentos do %d� setor gastão (em R$): %.2fR$", x, preTot);

                            consTot1 = consTot+consTot1;
                            preTot1 = preTot+preTot1;

                            printf("\n\n\n\nAs contas do %d� setor foram finalizadas.\n\n", x);

    }

    printf("\n\nO total (em R$) dos setores selecionados s�o de %.2fR$", preTot1);
    printf("\n\nO total (em kWh) dos setores selecionados s�o de %.2f kWh", consTot1);
    finPre = (float)consTot1*((trf)/(1-(0.0165+0.0761+0.27)));
    printf("\n\nO valor total da conta a ser paga (em R$) � de %.2fR$", finPre);

    return 0;
}
