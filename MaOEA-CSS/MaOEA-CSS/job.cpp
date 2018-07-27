#include"job.h"
void job::set_num(const int & I_num)
{
	J_Inum = I_num;
}
int job::get_num() const
{
	return J_Inum;
}
void job::set_p(const int & I_p)
{
	J_Ip = I_p;
}

int job::get_p() const
{
	return J_Ip;
}

void job::set_s(const int & I_s)
{
	J_Is = I_s;
}
int job::get_s() const
{
	return J_Is;
}
void job::set_r(const int & I_r)
{
	J_Ir = I_r;
}
int job::get_r() const
{
	return J_Ir;
}
void job::set_d(const int & I_d)
{
	J_Id = I_d;
}
int job::get_d() const
{
	return J_Id;
}
void job::set_C_j(const int & I_C_j)
{
	C_j = I_C_j;
}
int job::get_C_j() const
{
	return C_j;
}
/************************************************************************************************/

void batch::cal_B_Pb()
{
	int temp = 0;
	vector<job>::const_iterator iter_job;
	for (iter_job = v_Bjobs.cbegin(); iter_job != v_Bjobs.cend(); ++iter_job)
	{
		if (iter_job->get_p() > temp)
		{
			temp = iter_job->get_p();
		 }
	}
	B_ICb = temp;
}

void batch::cal_B_Cb()
{
	
}
void batch::cal_B_Sb()
{
}
void batch::cal_B_Tb()
{
}

void batch::set_num(const int & I_num)
{
	B_Inum = I_num;
}

int batch::get_num() const
{
	return B_Inum;
}

void batch::set_p(const int & I_p)
{
	B_Ip = I_p;
}

int batch::get_p() const
{
	return B_Ip;
}


void batch::set_s(const int & I_s)
{
	B_Is = I_s;
}

int batch::get_s() const
{
	return B_Is;
}

void batch::set_Pb(const int & I_Pb)
{
	B_IPb = I_Pb;
}

int batch::get_Pb() const
{
	return B_IPb;
}

void batch::set_Cb(const int & I_Cb)
{
	B_ICb = I_Cb;
}

int batch::get_Cb() const
{
	return B_ICb;
}

void batch::set_Sb(const int & I_Sb)
{
	B_ISb = I_Sb;
}

int batch::get_Sb() const
{
	return B_ISb;
}

void batch::set_Tb(const int & I_Tb)
{
	B_ITb = I_Tb;
}

int batch::get_Tb() const
{
	return B_ITb;
}

void batch::set_Ms(const int & I_Ms)
{
	B_IMs = I_Ms;
}

int batch::get_Ms() const
{
	return B_IMs;
}

void batch::set_Mnum(const int & I_Mnum)
{
	B_IMnum = I_Mnum;
}

int batch::get_Mnum() const
{
	return B_IMnum;
}

void batch::set_rs(const int & I_rs)
{
	B_Irs = I_rs;
}

int batch::get_rs() const
{
	return B_Irs;
}
/************************************************************************************/

void machine::cal_M_U()
{
}

void machine::cal_M_TC()
{

}

void machine::cal_M_T()
{

}

void machine::set_num(const int & I_num)
{
	M_Inum = I_num;
}

int machine::get_num() const
{
	return M_Inum;
}

void machine::set_L(const int & I_L)
{
	M_IL = I_L;
}

int machine::get_L() const
{
	return M_IL;
}

void machine::set_s(const int & I_s)
{
	M_Is = I_s;
}

int machine::get_s() const
{
	return M_Is;
}

void machine::set_Cmax(const int & I_Cmax)
{
	M_I_Cmax = I_Cmax;
}

int machine::get_Cmax() const
{
	return M_I_Cmax;
}


void machine::set_Tmax(const int & I_Tmax)
{
	M_I_Tmax = I_Tmax;
}

int machine::get_Tmax() const
{
	return M_I_Tmax;
}

void machine::set_B_num(const int & I_Bnum)
{
	M_Bcount = I_Bnum;
}

int machine::get_B_num() const
{
	return M_Bcount;
}
/********************************************************************************************/