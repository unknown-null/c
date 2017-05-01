# include <stdio.h>

int main(void)
{

    double wage;

    printf("输入本月应发工资：")；
    scanf("%f, &wage");

    double average;
    double average40;
    double average60;

    average = 7086;
    average40 = average * 40%;
    average60 = average * 60%;

    double gryanglao;    //个人养老
    double gsyanglao;    //公司养老
    double grshiye;    //个人失业
    double gsshiye;    //公司失业
    double gsgongshang;    //公司工伤
    double gsshengyu;       //公司生育
    double gryiliao;    //个人医疗
    double gsyiliao;    //公司医疗

    if (wage>=average60)
    {
        gryanglao = wage * 8%;
        gsyanglao = wage * 19%;
        grshiye = wage * 0.2%;
        gsshiye = wage * 0.8%;
        gsgongshang = wage * 0.2%;
        gsshengyu = wage * 0.8%;
        gryiliao = wage * 2% + 3
        gsyiliao = wage * 10%;

        printf("个人养老缴纳：%f, 公司养老缴纳：%f, gryanglao, gsyanglao");
        printf("个人失业缴纳：%f, 公司失业缴纳：%f, grshiye, gsshiye");
        printf("个人工伤缴纳：0， 公司工伤缴纳：%f, gsgongshang");
        printf("个人生育缴纳：0， 公司生育缴纳：%f, gsshengyu");
        printf("个人医疗缴纳：%f, 公司医疗缴纳：%f, gryiliao, gsyiliao");
    }
    else if (wage<=average60 && wage>average40)
    {
        gryanglao = wage * 8%;
        gsyanglao = wage * 19%;
        grshiye = wage * 0.2%;
        gsshiye = wage * 0.8%;
        gsgongshang = average60 * 0.2%;
        gsshengyu = average60 * 0.8%;
        gryiliao = average60 * 2% + 3
        gsyiliao = average60 * 10%;

        printf("个人养老缴纳：%f, 公司养老缴纳：%f, gryanglao, gsyanglao");
        printf("个人失业缴纳：%f, 公司失业缴纳：%f, grshiye, gsshiye");
        printf("个人工伤缴纳：0， 公司工伤缴纳：%f, gsgongshang");
        printf("个人生育缴纳：0， 公司生育缴纳：%f, gsshengyu");
        printf("个人医疗缴纳：%f, 公司医疗缴纳：%f, gryiliao, gsyiliao");
    }
    else if (wage<=average40)
    {
        gryanglao = average40 * 8%;
        gsyanglao = average40 * 19%;
        grshiye = average40 * 0.2%;
        gsshiye = average40 * 0.8%;
        gsgongshang = average60 * 0.2%;
        gsshengyu = average60 * 0.8%;
        gryiliao = average60 * 2% + 3
        gsyiliao = average60 * 10%;

        printf("个人养老缴纳：%f, 公司养老缴纳：%f, gryanglao, gsyanglao");
        printf("个人失业缴纳：%f, 公司失业缴纳：%f, grshiye, gsshiye");
        printf("个人工伤缴纳：0， 公司工伤缴纳：%f, gsgongshang");
        printf("个人生育缴纳：0， 公司生育缴纳：%f, gsshengyu");
        printf("个人医疗缴纳：%f, 公司医疗缴纳：%f, gryiliao, gsyiliao");
    }
    else
    {
        printf("请重新输入！\n");
    }
    return 0;

}
