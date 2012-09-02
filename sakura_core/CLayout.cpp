/*!	@file
	@brief �e�L�X�g�̃��C�A�E�g���

	@author Norio Nakatani
	@date 1998/3/11 �V�K�쐬
*/
/*
	Copyright (C) 1998-2001, Norio Nakatani
	Copyright (C) 2002, YAZAKI
	Copyright (C) 2009, nasukoji

	This source code is designed for sakura editor.
	Please contact the copyright holder to use this code for other purpose.
*/
#include "StdAfx.h"
#include "CLayout.h"
#include "Debug.h"



CLayout::CLayout()
{
	m_pPrev = NULL;
	m_pNext = NULL;
	m_nLinePhysical = 0;	/* �Ή�����_���s�ԍ� */
	m_pCDocLine = NULL;
	m_nOffset = 0;	/* �Ή�����_���s�̐擪����̃I�t�Z�b�g */
	m_nLength = 0;	/* �Ή�����_���s�̃n�C�g�� */
	m_nIndent = 0;	/* ���̃��C�A�E�g�s�̃C���f���g�� @@@ 2002.09.23 YAZAKI */
	m_nTypePrev = 0;/* �^�C�v 0=�ʏ� 1=�s�R�����g 2=�u���b�N�R�����g 3=�V���O���N�H�[�e�[�V���������� 4=�_�u���N�H�[�e�[�V���������� */
	m_nLayoutWidth = 0;		/* ���̃��C�A�E�g�s�̉��s���܂ރ��C�A�E�g���i�u�܂�Ԃ��Ȃ��v�I�����̂݁j */	// 2009.08.28 nasukoji
	return;
}


CLayout::~CLayout()
{
	return;
}

void CLayout::DUMP( void )
{
#ifdef _DEBUG
	MYTRACE_A( "\n\n��CLayout::DUMP()======================\n" );
	MYTRACE_A( "m_nLinePhysical=%d\t\t�Ή�����_���s�ԍ�\n", m_nLinePhysical );
	MYTRACE_A( "m_nOffset=%d\t\t�Ή�����_���s�̐擪����̃I�t�Z�b�g\n", m_nOffset );
	MYTRACE_A( "m_nLength=%d\t\t�Ή�����_���s�̃n�C�g��\n", m_nLength );
	MYTRACE_A( "m_nTypePrev=%d\t\t�^�C�v 0=�ʏ� 1=�s�R�����g 2=�u���b�N�R�����g 3=�V���O���N�H�[�e�[�V���������� 4=�_�u���N�H�[�e�[�V���������� \n", m_nTypePrev );
	MYTRACE_A( "======================\n" );
#endif
	return;
}


/*[EOF]*/