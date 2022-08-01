import React from 'react'
import './Navbar.css'
import { FiSearch } from 'react-icons/fi'
import { BiMessageSquareDetail } from 'react-icons/bi'


function Navbar() {
  return (
    <div>
        <div className='wrapper'>


            <div id='left'>
                <span id='language'>EN</span>
                <div id='search'>
                    <div id='input'></div>
                    <FiSearch/>
                </div>
            </div>


            <div id='center'>
                <h1 id='logo'>Stanfield exchange Commodities</h1>
            </div>


            <div id='right'>
                <div className='rig'>register</div>
                <div className='rig'>sign in</div>
                <BiMessageSquareDetail className='rig'/>
            </div>
        </div>
    </div>
  )
}

export default Navbar
