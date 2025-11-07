// STATUS: NOT STARTED

#include "e_globalmanager.h"

bool EGlobalManager::m_startupComplete = false;
bool EGlobalManager::m_shutdownComplete = true;
int EGlobalManager::m_nClients = 0;
int EGlobalManager::m_nStartedUpClients = 0;
EGMClientData EGlobalManager::m_clients[32];

void EGlobalManager::Register(EGlobalManagerClient *pClient, int priority) {
	EGMClientData *pc;
	
  EGMClientData *pEVar1;
  EGMClientData *pEVar2;
  
  pEVar2 = _14EGlobalManager_m_clients + _14EGlobalManager_m_nClients;
  pEVar1 = _14EGlobalManager_m_clients + _14EGlobalManager_m_nClients;
  _14EGlobalManager_m_nClients = _14EGlobalManager_m_nClients + 1;
  pEVar1->priority = priority;
  pEVar2->pClient = pClient;
  return;
}

bool EGlobalManager::Startup() {
	int i;
	int j;
	EGMClientData *pi;
	EGMClientData temp;
	EGMClientData *pcd;
	
  undefined *puVar1;
  EGMClientData EVar2;
  EGlobalManagerClient__vtable *pEVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  long lVar7;
  EGMClientData *pEVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  EGMClientData temp;
  
  if (__14EGlobalManager_m_startupComplete == 0) {
    iVar9 = 0;
    __14EGlobalManager_m_startupComplete = 1;
    __14EGlobalManager_m_shutdownComplete = 0;
    if (0 < _14EGlobalManager_m_nClients) {
      do {
        iVar10 = iVar9 + 1;
        if (iVar10 < _14EGlobalManager_m_nClients) {
          pEVar8 = _14EGlobalManager_m_clients + iVar10;
          iVar11 = iVar10;
          do {
            if (pEVar8->priority < _14EGlobalManager_m_clients[iVar9].priority) {
              temp = _14EGlobalManager_m_clients[iVar9];
              puVar1 = (undefined *)((int)&temp.priority + 3);
              uVar4 = (uint)puVar1 & 7;
              puVar6 = (ulong *)(puVar1 + -uVar4);
              *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | (ulong)temp >> (7 - uVar4) * 8;
              EVar2 = *pEVar8;
              uVar4 = iVar9 * 8 + 0x4e2077;
              uVar5 = uVar4 & 7;
              puVar6 = (ulong *)(uVar4 - uVar5);
              *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | (ulong)EVar2 >> (7 - uVar5) * 8;
              _14EGlobalManager_m_clients[iVar9] = EVar2;
              puVar1 = (undefined *)((int)&pEVar8->priority + 3);
              uVar4 = (uint)puVar1 & 7;
              puVar6 = (ulong *)(puVar1 + -uVar4);
              *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | (ulong)temp >> (7 - uVar4) * 8;
              *pEVar8 = temp;
            }
            iVar11 = iVar11 + 1;
            pEVar8 = pEVar8 + 1;
          } while (iVar11 < _14EGlobalManager_m_nClients);
        }
        iVar9 = iVar10;
      } while (iVar10 < _14EGlobalManager_m_nClients);
    }
    if (_14EGlobalManager_m_nStartedUpClients < _14EGlobalManager_m_nClients) {
      do {
        pEVar3 = (_14EGlobalManager_m_clients[_14EGlobalManager_m_nStartedUpClients].pClient)->
                 __vtable;
        lVar7 = (*(code *)pEVar3[1].EGlobalManagerClient)
                          ((int)&(_14EGlobalManager_m_clients[_14EGlobalManager_m_nStartedUpClients]
                                 .pClient)->__vtable + (int)*(short *)(pEVar3 + 1));
        if (lVar7 == 0) {
          __14EGlobalManager_m_startupComplete = 0;
          return false;
        }
        _14EGlobalManager_m_nStartedUpClients = _14EGlobalManager_m_nStartedUpClients + 1;
      } while (_14EGlobalManager_m_nStartedUpClients < _14EGlobalManager_m_nClients);
    }
  }
  return true;
}

void EGlobalManager::Shutdown() {
  EGlobalManagerClient__vtable *pEVar1;
  
  if (__14EGlobalManager_m_shutdownComplete == 0) {
    __14EGlobalManager_m_shutdownComplete = 1;
    __14EGlobalManager_m_startupComplete = 0;
    if (0 < _14EGlobalManager_m_nStartedUpClients) {
      do {
        pEVar1 = (_14EGlobalManager_m_clients[_14EGlobalManager_m_nStartedUpClients + -1].pClient)->
                 __vtable;
        (*(code *)pEVar1[1].ManagedShutdown)
                  ((int)&(_14EGlobalManager_m_clients[_14EGlobalManager_m_nStartedUpClients + -1].
                         pClient)->__vtable + (int)*(short *)&pEVar1[1].ManagedStartup);
        _14EGlobalManager_m_nStartedUpClients = _14EGlobalManager_m_nStartedUpClients + -1;
      } while (0 < _14EGlobalManager_m_nStartedUpClients);
    }
  }
  return;
}
