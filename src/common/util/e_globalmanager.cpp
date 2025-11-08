/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "e_globalmanager.h"
#include "common/types.h"

bool EGlobalManager::m_startupComplete;
bool EGlobalManager::m_shutdownComplete;
EGMClientData EGlobalManager::m_clients[32];
int EGlobalManager::m_nClients;
int EGlobalManager::m_nStartedUpClients;

void EGlobalManager::Register(EGlobalManagerClient *pClient, int priority)
{
    EGMClientData *pc;

    EGMClientData *pEVar1;
    EGMClientData *pEVar2;

    pEVar2 = m_clients + m_nClients;
    pEVar1 = m_clients + m_nClients;
    m_nClients++;

    pEVar1->priority = priority;
    pEVar2->pClient = pClient;
}

bool EGlobalManager::Startup() // TODO
{                              /*
                                  int i;
                                  int j;
                                  EGMClientData *pi;
                                  EGMClientData temp;
                                  EGMClientData *pcd;
                             
                                  u8 *puVar1;
                                  EGMClientData EVar2;
                                  EGlobalManagerClient *pEVar3;
                                  u32 uVar4;
                                  u32 uVar5;
                                  u64 *puVar6;
                                  long lVar7;
                                  EGMClientData *pEVar8;
                                  int iVar9;
                                  int iVar10;
                                  int iVar11;
                                  EGMClientData temp;
                             
                                  if (m_startupComplete == false)
                                  {
                                      iVar9 = 0;
                                      m_startupComplete = true;
                                      m_shutdownComplete = false;
                                      if (0 < m_nClients)
                                      {
                                          do
                                          {
                                              iVar10 = iVar9 + 1;
                                              if (iVar10 < m_nClients)
                                              {
                                                  pEVar8 = m_clients + iVar10;
                                                  iVar11 = iVar10;
                                                  do
                                                  {
                                                      if (pEVar8->priority < m_clients[iVar9].priority)
                                                      {
                                                          temp = m_clients[iVar9];
                                                          puVar1 = (u8 *)((int)&temp.priority + 3);
                                                          uVar4 = (u32)puVar1 & 7;
                                                          puVar6 = (u64 *)(puVar1 + -uVar4);
                                                          *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | (u64)temp >> (7 - uVar4) * 8;
                                                          EVar2 = *pEVar8;
                                                          uVar4 = iVar9 * 8 + 0x4e2077;
                                                          uVar5 = uVar4 & 7;
                                                          puVar6 = (u64 *)(uVar4 - uVar5);
                                                          *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | (u64)EVar2 >> (7 - uVar5) * 8;
                                                          m_clients[iVar9] = EVar2;
                                                          puVar1 = (u8 *)((int)&pEVar8->priority + 3);
                                                          uVar4 = (u32)puVar1 & 7;
                                                          puVar6 = (u64 *)(puVar1 + -uVar4);
                                                          *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | (u64)temp >> (7 - uVar4) * 8;
                                                          *pEVar8 = temp;
                                                      }
                                                      iVar11 = iVar11 + 1;
                                                      pEVar8 = pEVar8 + 1;
                                                  } while (iVar11 < m_nClients);
                                              }
                                              iVar9 = iVar10;
                                          } while (iVar10 < m_nClients);
                                      }
                                      if (m_nStartedUpClients < m_nClients)
                                      {
                                          do
                                          {
                                              pEVar3 = (m_clients[m_nStartedUpClients].pClient)->__vtable;
                                              lVar7 = (*(code *)pEVar3[1].EGlobalManagerClient)((int)&(m_clients[m_nStartedUpClients]
                                                                                                           .pClient)
                                                                                                    ->__vtable +
                                                                                                (int)*(short *)(pEVar3 + 1));
                                              if (lVar7 == 0)
                                              {
                                                  m_startupComplete = false;
                                                  return false;
                                              }
                                              m_nStartedUpClients = m_nStartedUpClients + 1;
                                          } while (m_nStartedUpClients < m_nClients);
                                      }
                                  }*/
    return true;
}

void EGlobalManager::Shutdown()
{
    EGlobalManagerClient *pEVar1;

    if (m_shutdownComplete == false)
    {
        m_shutdownComplete = true;
        m_startupComplete = false;
        if (0 < m_nStartedUpClients)
        {
            do
            {
                pEVar1 = m_clients[m_nStartedUpClients + -1].pClient;
                //(*(code *)pEVar1[1].ManagedShutdown)((int)&(m_clients[m_nStartedUpClients + -1].pClient)->__vtable + (int)*(short *)&pEVar1[1].ManagedStartup);
                pEVar1[1].ManagedShutdown();
                m_nStartedUpClients--;
            } while (0 < m_nStartedUpClients);
        }
    }
}