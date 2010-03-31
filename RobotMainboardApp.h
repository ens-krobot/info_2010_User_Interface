/***************************************************************
 * Name:      RobotMainboardApp.h
 * Purpose:   Defines Application Class
 * Author:    Olivier BICHLER (olivier.bichler@ens-cachan.fr)
 * Created:   2008-08-08
 * Copyright: Olivier BICHLER ()
 * License:
 **************************************************************/

/**
 * @mainpage RobotMainboard
 * @section Introduction
 * Ce programme est destiné à être le cerveau du robot. Il a pour objectif de coordonner les actions du robot en
 * dialoguant avec les différentes cartes à base de PIC et d'intégrer toute le stratégie dite de "haut niveau", comme
 * la génération de trajectoires basées sur une reconnaissance visuelle à l'aide d'une webcam par exemple.
 * Il est doté d'une interface graphique, ce qui permet en outre d'interagir, de contrôler et de diagnostiquer en temps
 * réel l'état du robot par un utilisateur humain. @n
 * L'essentiel du programme se trouve dans le fichier RobotMainboardMain.h, et les fonctions sont implémentées dans
 * RobotMainboardMain.cpp. Voir la classe principale du programme : RobotMainboardFrame.
 *
 * @section Installation
 * Ce programme requière Windows XP ou Windows Vista pour fonctionner, car il utilise des fonctions spécifiques à
 * Windows pour l'accès au périphériques USB.
 *
 * @author		Olivier BICHLER
 * @version		1.0
*/

#ifndef ROBOTMAINBOARDAPP_H
#define ROBOTMAINBOARDAPP_H

#include <wx/app.h>

class RobotMainboardApp : public wxApp {
	public:
		virtual bool OnInit();
};

#endif // ROBOTMAINBOARDAPP_H
