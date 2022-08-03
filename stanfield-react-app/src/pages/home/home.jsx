import React from 'react'
import Announcement from '../../components/announcements/announcement'
import Navbar from '../../components/navbar/navbar'
import Slider from '../../components/slider/slider'

function Home() {
  return (
    <div>
      <Announcement/>
      <Navbar/>
      <Slider/>
    </div>
  )
}

export default Home
