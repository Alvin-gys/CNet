/* @Chen Yuao
 * @2020.11.20
 * @Data.c��ͷ�ļ�
 *
 */
#pragma once

#include<stdio.h>
#include"Net.h"
#include"Matrix.h"

/* �������ƣ�getAverage
 * ����������double data[][DATA_DIMENSION] : ������ؼ���Ķ�ά����
 *			double* result : ���������������
 */
void getAverage(double data[][DATA_DIMENSION], double* result);


/* �������ƣ�getStdDeviation
 * ����������double data[][DATA_DIMENSION] : ������ؼ���Ķ�ά����
 *			double* result : ���������������
 */
void getStdDeviation(double data[][DATA_DIMENSION], double* result);


/* �������ƣ�dataDeal
 * ����������double data[][DATA_DIMENSION] : ������ؼ���Ķ�ά����
 * ������������ȱʧ�����ݣ�����ΪDBL_MAX�����Լ��쳣ֵ�����ֵ�Ĳ�ֵ����������׼������ݣ����Ϊ��ֵ
 *			���������ݹ�Լ����׼���׼������
 */
void dataNormalization(double data[][DATA_DIMENSION]);