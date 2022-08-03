import React from 'react'
import { FaArrowLeft, FaArrowRight } from 'react-icons/fa'
import './slider.css'
import POULTRY from '../../assets/cereal.jpg'

function Slider() {
  return (
    <div>
        <div id='sliderContainer'>
            <div className='arrow' id='leftarrow'><FaArrowLeft/></div>
            <div id='wrapper'>


              <div id='slider'>
                <div id='imagecontainer'>
                  <img src={POULTRY} alt='Poultry' id='sliderimage'/>
                </div>
                <div id='infoContainer'></div>
              </div>


            </div>
            <div className='arrow' id='rightarrow'><FaArrowRight/></div>
        </div>
    </div>
  )
}

export default Slider
