import React from 'react'
import { BiArrowToLeft, BiArrowToRight } from 'react-icons/bi'
import './slider.css'

function Slider() {
  return (
    <div>
        <div id='sliderContainer'>
            <div className='arrow' id='leftarrow'><BiArrowToLeft/></div>
            <div id='wrapper'>
              <div id='slider'>
                <div id='imagecontainer'>
                  <img src="../public/assets/vegetable.png" alt='si' id='sliderimage'/>
                </div>
                <div id='infoContainer'></div>
              </div>
            </div>
            <div className='arrow' id='rightarrow'><BiArrowToRight></BiArrowToRight></div>
        </div>
    </div>
  )
}

export default Slider
