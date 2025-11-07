// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_LIVEMODEPANEL_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_LIVEMODEPANEL_H

struct EPanel : EUIObjectNode {
protected:
	struct {
		short int __delta;
		short int __index;
		union {
			void (*__pfn)();
			short int __delta2;
		} __pfn_or_delta2;
	} m_messageFns[48];
	u32 m_state;
	Panelstate m_panleState;
	bool m_bDidObjHighlight;
public:
	bool m_b2playerInit;
	bool m_b2playerReadyToQuit;
	bool m_bDidResumeSinglePlayerDialog;
	bool m_bAmInBuildHouseMode;
	EUIObjectNode *mpCurChild;
	EUIObjectNode *mSelected;
	ERFont *m_pFont;
	ESimsCam *m_pCameras[2];
	DPadWin *m_pDpadWins[2];
	ESimsCursor *m_pCursors[2];
	SimInfoWin *m_pInfoWindows[2];
	EActionQueue *m_pActionQueues[2];
	TimeWindowAndPauseBar *m_pTimeNMoneyWin;
	EPausePanel m_pausePanel;
	TimeOfDay m_tod;
	EMemoryMeterWin m_MemoryMeterWin;
	
	EPanel& operator=();
	EPanel();
	EPanel();
	/* vtable[1] */ virtual EPanel(EPanel*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	void Init();
	void Reset();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[7] */ virtual void Message(EUIObjectNode *pChild, u32 messId);
	ESimsCam* GetCam(int which);
	bool GetInfoWinVis(int player);
	Panelstate GetState();
	void UpdateCameras();
protected:
	void InitPanleForPlayer(int which);
	void ResetPanelForPlayer(int which);
	void SetupTwoPlayer();
	void SetState(int playerid, Panelstate state);
	void SetupFnTable();
	void _Mess_dpad_toggle_mood(void *p, u32 messid);
	void _Mess_dpad_toggle_job(void *p, u32 messid);
	void _Mess_dpad_toggle_personality(void *p, u32 messid);
	void _Mess_dpad_toggle_relationships(void *p, u32 messid);
	void _Mess_dpad_chaged_selected_sim_L(void *p, u32 messid);
	void _Mess_dpad_chaged_selected_sim_R(void *p, u32 messid);
	void _Mess_dpad_paused(void *p, u32 messid);
	void _Mess_dpad_toggle_ActionQueueMan(void *p, u32 messid);
	void _Mess_dpad_delete_Action_p1(void *p, u32 messid);
	void _Mess_dpad_delete_Action_p2(void *p, u32 messid);
	void _Mess_dpad_next_wall_mode(void *p, u32 messid);
	void _Mess_dpad_speed_up(void *p, u32 messid);
	void _Mess_dpad_speed_down(void *p, u32 messid);
	void _Mess_infowin_cancle(void *p, u32 messid);
	void _Mess_curs_add_action_to_queue_p1(void *p, u32 messid);
	void _Mess_curs_add_action_to_queue_p2(void *p, u32 messid);
	void _Mess_curs_activate_pi_menu(void *p, u32 messid);
	void _Mess_curs_de_activate_pi_menu(void *p, u32 messid);
	void _Mess_curs_moved_p1(void *p, u32 messid);
	void _Mess_curs_moved_p2(void *p, u32 messid);
	void _Mess_cam_activate_firstperson(void *p, u32 messid);
	void _Mess_cam_de_activate_firstperson(void *p, u32 messid);
	void _Mess_cam_changed_pos(void *p, u32 messid);
	void _Mess_pi_add_action_to_queue_p1(void *p, u32 messid);
	void _Mess_pi_add_action_to_queue_p2(void *p, u32 messid);
	void _Mess_pi_went_to_sleep(void *p, u32 messid);
	void _Mess_dialog_activate(void *p, u32 messid);
	void _Mess_dialog_de_activate(void *p, u32 messid);
	void _Mess_sim_object_placed(void *p, u32 messid);
	void _Mess_sim_object_picked(void *p, u32 messid);
	void _Mess_pause_begin(void *p, u32 _Messid);
	void _Mess_pause_end(void *p, u32 _Messid);
	void _Mess_pause_cursor_begin(void *p, u32 _Messid);
	void _Mess_pause_cursor_end(void *p, u32 _Messid);
	void _Mess_language_change(void *p, u32 _Messid);
	void _Mess_cmdObjectLightingChanged(void *p, u32 _Messid);
	void _Mess_cmdRoomLightingChanged(void *p, u32 _Messid);
	void _Mess_sim_edit_begin(void *p, u32 _Messid);
	void _Mess_sim_edit_end(void *p, u32 _Messid);
	void _Mess_scratch_mem_init_end(void *p, u32 _Messid);
	void _Mess_dpad_chaged_selected_simLButton(void *p, u32 _Messid);
	void _Mess_dpad_chaged_selected_simRButton(void *p, u32 _Messid);
	void _Mess_pip_called(void *p, u32 _Messid);
	void _Mess_player_2_quit(void *p, u32 _Messid);
};

extern __vtbl_ptr_type EPanel virtual table[15];

void CleanLotForBuildHouseMode();
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void EPanel::~EPanel(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_LIVEMODEPANEL_H
