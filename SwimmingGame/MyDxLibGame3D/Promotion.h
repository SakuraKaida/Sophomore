#pragma once
#include "DxLib.h"

class Promotion
{
public:

	// コンストラクタ
	Promotion();
	// デストラクタ
	~Promotion();

	/// <summary>
	/// 広告の表示
	/// </summary>
	void Draw();

private:
	// 表示させるポジション
	const VECTOR mDrawPos;

	// シンプルな広告
	int mSimple;
	// ファルソックの広告
	int mFalsoc;
	// 学校の広告
	int mSchool;
	// ほのぼのの広告
	int mHonobono;
	// コーラの広告
	int mKora;
	// 日本の広告
	int mJapan;
	// やまこの広告
	int mYamako;



	// 広告の土台
	int mPromo;
};

