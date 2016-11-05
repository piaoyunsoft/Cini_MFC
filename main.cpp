#include "Ini.h"
#include <Windows.h>

void main()
{
	CIni ini = CIni(".//dllhook.ini");
	ini.WriteString("dllhook", "username", "piaoyun");

	CString username = ini.GetString("dllhook", "username");
	::MessageBox(NULL, username, NULL, MB_OK);

	ini.DeleteSection("dllhook");
}