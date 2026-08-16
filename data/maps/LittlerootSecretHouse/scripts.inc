LittlerootSecretHouse_MapScripts::
	.byte 0


LittlerootSecretHouse_PrototypeBattle::
# 4 "data/maps/LittlerootSecretHouse/scripts.pory"
	lock
# 5 "data/maps/LittlerootSecretHouse/scripts.pory"
	faceplayer
# 6 "data/maps/LittlerootSecretHouse/scripts.pory"
	trainerbattle_single TRAINER_AMBER_TESTING, PrototypeAmberBattleStart, PrototypeAmberBattleEnd
# 7 "data/maps/LittlerootSecretHouse/scripts.pory"
	release
	return


PrototypeAmberBattleStart::
# 10 "data/maps/LittlerootSecretHouse/scripts.pory"
	.string "Oh! Great timing!\p"
	.string "Come help me with battle testing for a\n"
	.string "sec!$"

PrototypeAmberBattleEnd::
# 14 "data/maps/LittlerootSecretHouse/scripts.pory"
	.string "Thanks a lot!$"
