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
	/// �L���̕\��
	/// </summary>
	void Draw();

private:
	// �\��������|�W�V����
	const VECTOR mDrawPos;

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
	int mPromo;
};

