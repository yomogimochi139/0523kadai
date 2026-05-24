#include "judge.h"

JudgeResult CompareNumber(int RandomNumber, int InputNumber)
{
	if (InputNumber > RandomNumber)
	{
		//　入力した数字が生成されたランダムな数字より大きかった場合
		return JudgeResult::Bigger;
	}
	else if(InputNumber < RandomNumber)
	{
		//　入力した数字が生成されたランダムな数字より小さかった場合
		return JudgeResult::Smaller;
	}
	else
	{
		//　入力した数字が生成されたランダムな数字と一致した場合
		return JudgeResult::Correct;
	}
}

void ShowResult(JudgeResult)
{
	switch (result)
	{
	case JudgeResult::Bigger:
		printf("大きい\n");
		break;
	case JudgeResult::Smaller;
		printf("小さい\n");
		break;
	case JudgeResult::
		printf("ゲームクリア\n");
		break;
	}
}