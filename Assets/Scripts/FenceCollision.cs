/************************************************************************
** Author: James Tuttle
** Date: 02/08/2017
** ----------------------------------
**
** Purpose: Collision sound when FT hits the fence
**
**************************************************************************/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FenceCollision : MonoBehaviour {

private AudioSource source;

public AudioClip fenceKick;

void Awake() {
	source = GetComponent<AudioSource>();
}



	void OnTriggerEnter(Collider col) {
		if(col.gameObject.tag == "PipeZone") {
			source.PlayOneShot(fenceKick);
		}
	}
}
