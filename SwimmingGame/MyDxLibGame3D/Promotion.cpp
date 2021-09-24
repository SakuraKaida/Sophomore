#include "Promotion.h"

// �萔
const int DRAW_X = 45;
const int DRAW_Y = 85;
const int DRAW_Y2 = 0;
const int PROMOBASE_NUM = 2;
const int PROMO_NUM = 7;

Promotion::Promotion()
	: mBaseDrawPos1{VGet(0.0f, 10.0f, 70.0f),       // �y��P
					VGet(0.0f, 10.0f, -70.0f),      // �y��Q
}
	, mBaseDrawPos2{VGet(0.0f, 10.0f, 10.0f),       // �y��P
					VGet(0.0f, 10.0f, 10.0f),      // �y��P
}
	, mPromoDrawPos{VGet(-25.0f, 10.0f, 69.9f),    // �V���N���L��
					VGet(0.0f, 10.0f, 69.9f),      // �V���N���̃|�W�V����
					VGet(0.0f, 10.0f, 69.9f),      // �V���N���̃|�W�V����
					VGet(0.0f, 10.0f, 69.9f),      // �V���N���̃|�W�V����
					VGet(0.0f, 10.0f, 69.9f),      // �V���N���̃|�W�V����
					VGet(0.0f, 10.0f, 69.9f),      // �V���N���̃|�W�V����
					VGet(0.0f, 10.0f, 69.9f),      // �V���N���̃|�W�V����
}
	, mSetSize(VGet(0.05f, 0.05f, 0.1f))
	, mPromo{ -1 }
	, mPromoBase1{ -1 }
	, mPromoBase2{ -1 }
{
	// ���f���̃��[�h
	for (int i = 0; i < PROMOBASE_NUM; i++)
	{
		mPromoBase1[i] = MV1LoadModel("data/promotion/untitled.mv1");
	}
	for (int i = 2; i < PROMOBASE_NUM + 2; i++)
	{
		mPromoBase2[i] = MV1LoadModel("data/promotion/untitled2.mv1");
	}
	// �摜�̃��[�h
	//mSimple = LoadGraph("data/promotion/Texture/sinkuro.png");
	//mFalsoc = LoadGraph("data/promotion/Texture/falsoc.png");
	//mSchool = LoadGraph("data/promotion/Texture/gakkou.png");
	//mHonobono = LoadGraph("data/promotion/Texture/honobono.png");
	//mKora = LoadGraph("data/promotion/Texture/ko-ra.png");
	//mJapan = LoadGraph("data/promotion/Texture/nihon.png");
	//mYamako = LoadGraph("data/promotion/Texture/yamako.png");	

	// �|�W�V�����̃Z�b�g
	SetPosition();
}

Promotion::~Promotion()
{
	// ���f���f�[�^�̍폜
	for (int i = 0; i < PROMOBASE_NUM; i++)
	{
		MV1DeleteModel(mPromoBase1[i]);
		mPromoBase1[i] = NULL;
	}
	for (int i = 0; i < PROMOBASE_NUM; i++)
	{
		MV1DeleteModel(mPromoBase2[i]);
		mPromoBase2[i] = NULL;
	}
	for (int i = 0; i < PROMO_NUM; i++)
	{
		MV1DeleteModel(mPromo[i]);
		mPromo[i] = NULL;
	}
}

void Promotion::SetPosition()
{
	// �L���̃|�W�V�����E�傫���̃Z�b�g
	for (int i = 0; i < PROMOBASE_NUM; i++)
	{
		MV1SetScale(mPromoBase1[i], mSetSize);
		MV1SetPosition(mPromoBase1[i], mBaseDrawPos1[i]);
	}
	for (int i = 0; i < PROMOBASE_NUM; i++)
	{
		MV1SetScale(mPromoBase2[i], mSetSize);
		MV1SetPosition(mPromoBase2[i], mBaseDrawPos2[i]);
	}

	
	//for (int i = 0; i < 7; i++)
	//{
	//	mPromo[i] = MV1LoadModel("data/promotion/base.mv1");
	//	MV1SetScale(mPromo[i], mSetSize);
	//	MV1SetPosition(mPromo[i], mPromoDrawPos[i]);
	//}
	//// ���f���Ƀe�N�X�`���\��t��
	//MV1SetTextureGraphHandle(mPromo[0], 0, mSimple, TRUE);
	//MV1SetTextureGraphHandle(mPromo[1], 0, mSimple, TRUE);
	//MV1SetTextureGraphHandle(mPromo[2], 0, mSimple, TRUE);
	//MV1SetTextureGraphHandle(mPromo[3], 0, mSimple, TRUE);
	//MV1SetTextureGraphHandle(mPromo[4], 0, mSimple, TRUE);
	//MV1SetTextureGraphHandle(mPromo[5], 0, mSimple, TRUE);
	//MV1SetTextureGraphHandle(mPromo[6], 0, mSimple, TRUE);

}

void Promotion::Draw()
{

	/*MV1SetRotationXYZ(mPromo, VGet(90.0f * DX_PI_F / 180.0f, 0.0f, 0.0f));*/
	
	for (int i = 0; i < PROMOBASE_NUM; i++)
	{
		MV1DrawModel(mPromoBase1[i]);
		MV1DrawModel(mPromoBase2[i]);
	}
	
	/*for (int i = 0; i < 7; i++)
	{
		MV1DrawModel(mPromo[i]);
	}
	*/

	//// ��U
	//if (GetCameraAngleHRotate() == 0.0f)
	//{
	//}
}
