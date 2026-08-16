LittlerootSecretTown_MapScripts::
	.byte 0


LittlerootSecretTown_EventScript_Blockade::
# 4 "data/maps/LittlerootSecretTown/scripts.pory"
	lock
# 5 "data/maps/LittlerootSecretTown/scripts.pory"
	msgbox LittlerootSecretTown_EventScript_Blockade_Text_0
# 6 "data/maps/LittlerootSecretTown/scripts.pory"
	closemessage
# 7 "data/maps/LittlerootSecretTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootSecretTown_EventScript_Blockade_Movement_0
# 10 "data/maps/LittlerootSecretTown/scripts.pory"
	waitmovement 0
# 11 "data/maps/LittlerootSecretTown/scripts.pory"
	release
	return


# 7 "data/maps/LittlerootSecretTown/scripts.pory"
LittlerootSecretTown_EventScript_Blockade_Movement_0:
# 8 "data/maps/LittlerootSecretTown/scripts.pory"
	walk_left
	step_end

LittlerootSecretTown_EventScript_Blockade_Text_0:
# 5 "data/maps/LittlerootSecretTown/scripts.pory"
	.string "Maybe I shouldn't go here without a\n"
	.string "pokemon...$"
