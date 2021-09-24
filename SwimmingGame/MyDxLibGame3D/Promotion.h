#pragma once
#include "DxLib.h"

class Promotion
{
public:

	// �R���X�g���N�^
	Promotion();
	// �f�X�g���N�^
	~Promotion();

	/// <summary>
	/// �L���̕`��
	/// </summary>
	void Draw();


	/// <summary>
	/// �L���̃|�W�V�������Z�b�g
	/// </summary>
	void SetPosition();

private:
	// �\��������|�W�V����
	const VECTOR mPromoDrawPos[8];
	const VECTOR mBaseDrawPos1[2];
	const VECTOR mBaseDrawPos2[2];
	const VECTOR mSetSize;

	// �V���v���ȍL��
	int mSimple;
	// �t�@���\�b�N�̍L��
	int mFalsoc;
	// �w�Z�̍L��
	int mSchool;
	// �ق̂ڂ̂̍L��
	int mHonobono;
	// �R�[���̍L��
	int mKora;
	// ���{�̍L��
	int mJapan;
	// ��܂��̍L��
	int mYamako;

	// �L���̓y��
	int mPromo[7];
	// �L���̃x�[�X
	int mPromoBase1[2];
	int mPromoBase2[2];
};

