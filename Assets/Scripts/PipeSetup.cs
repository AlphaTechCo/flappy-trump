﻿/************************************************************************
** Author: James Tuttle
** Date: 01/27/2017
** ----------------------------------
**
** Purpose: Pipe setup
**
**************************************************************************/


using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PipeSetup : MonoBehaviour {

	public float minSpace;
	public float maxSpace;
	public GameObject top;
	public GameObject bottom;
	private SpriteRenderer renTop;
	private SpriteRenderer renBottom;

	// Use this for initialization
	void Start () {
		Setup();
	}
	
	// Update is called once per frame
	void Update () {
		PipeRemover();
	}

	void Setup() {
		// Setup random pipe/fence points for top and bottom
		// GameObject(s)

		renTop = top.GetComponent<SpriteRenderer>();
		renBottom = bottom.GetComponent<SpriteRenderer>();

		float temp = Random.Range(-3.38f + minSpace, 5);
		top.transform.position = new Vector2(top.transform.position.x, temp);//added top to top.transform.position.x

		float temp2 = Random.Range(minSpace, maxSpace);
		bottom.transform.position = new Vector2(bottom.transform.position.x, temp - temp2);//added bottom to bottom.transform.position.x
	}

	void PipeRemover() {
		if(transform.position.x < 0) {
			if(!renTop.isVisible && !renBottom.isVisible) {
				Destroy(this.gameObject);
			}
		}

	}
}

// y = btm -3.38
// y = top 5